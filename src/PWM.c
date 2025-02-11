#include <PWM_U4C7.h>

void InitPWM(uint pin, uint *slice) {
    // Configura o pino como saída PWM
    gpio_set_function(pin, GPIO_FUNC_PWM);
    
    // Obtém o número do slice PWM correspondente ao pino
    *slice = pwm_gpio_to_slice_num(pin);

    printf("slice: %d\n", *slice);
}

void ConfigPWM(uint slice) {
    // Configurar a frequência do PWM para 50 Hz (Período = 20ms)
    pwm_set_wrap(slice, PWM_WRAP);  // Período de 20ms
    pwm_set_clkdiv(slice, PWM_CLKDIV);  // Divisor de clock para 50Hz
    
    // Ativar PWM
    pwm_set_enabled(slice, true);
}

void SetServoPulseWidth(uint pin, uint16_t pulseWidth, uint16_t delayMs) {
    // Ajusta o servo motor para a largura de pulso fornecida
    pwm_set_gpio_level(pin, pulseWidth);
    sleep_ms(delayMs);
}