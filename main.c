#include <PWM_U4C7.h>

#define SERVOMOTOR 22
#define RGBLED 12


int main(){

    stdio_init_all();

    uint8_t pin = SERVOMOTOR;  
    uint slice;

    //inicia o PWM
    InitPWM(pin, &slice);
    // configura o pwm de acordo com os parâmetros do arquivo (50Hz)
    ConfigPWM(slice);

    printf("slice: %d\n", slice);

    uint16_t pulseWidths[] = {2400, 1470, 500};
    size_t numPositions = sizeof(pulseWidths) / sizeof(pulseWidths[0]);

    while(1){
        
        //ajusta a posição do servo motor nos valores do vetor: 2400, 1470 e 500
        SetServoPulseWidth(pin, pulseWidths[0], 5000);  
        SetServoPulseWidth(pin, pulseWidths[1], 5000);  
        SetServoPulseWidth(pin, pulseWidths[2], 5000);  

        //ajusta a posição de 0º a 180º e de volta suavemente, com um incremento de 5 microssegundos na largura de pulso
        MoveServoPeriodically(pin, 500, 2500, 5, 10);
    }

    return 0;
}