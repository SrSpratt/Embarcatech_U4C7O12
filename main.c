#include <PWM_U4C7.h>

#define PINS 2
#define SERVOMOTOR 22
#define RGBLED 12
#define WRAPCOUNTER 20000
#define DIVIDER 125.0


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


    //ajusta a posição do servo motor nos valores do vetor: 2400, 1470 e 500
    SetServoPulseWidth(pin, pulseWidths[0], 5000);  
    SetServoPulseWidth(pin, pulseWidths[1], 5000);  
    SetServoPulseWidth(pin, pulseWidths[2], 5000);  

    return 0;
}