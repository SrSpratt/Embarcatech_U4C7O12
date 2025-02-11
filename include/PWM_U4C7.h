#ifndef PWM_U4C7_H
#define PWM_U4C7_H

#include <stdio.h>
#include "hardware/pwm.h"
#include "pico/stdlib.h"
#define PWM_WRAP 20000   // Período de 20ms
#define PWM_CLKDIV 125.0f // Divisor de clock para 50Hz

/**
 * @brief Inicializa o PWM configurando o pino e obtendo o número do slice.
 * 
 * Esta função configura o pino especificado como uma saída PWM e recupera o número do slice 
 * associado ao pino GPIO. O número do slice é armazenado em uma variável fornecida.
 *
 * @param uint O tipo do pino GPIO que será configurado para saída PWM.
 * @param uint* Ponteiro para armazenar o número do slice PWM associado ao pino.
 */
void InitPWM(uint, uint*);


/**
 * @brief Configura o módulo PWM com frequência de 50Hz.
 * 
 * Esta função configura o módulo PWM para uma frequência de 50Hz (período de 20ms), 
 * adequada para controle de servomotores. Também ativa o PWM no slice especificado.
 *
 * @param uint O tipo do número do slice PWM que será configurado.
 */
void ConfigPWM(uint);


/**
 * @brief Ajusta a largura do pulso do servomotor.
 * 
 * Esta função ajusta o servomotor para a largura de pulso especificada. O tempo de espera 
 * após o ajuste pode ser controlado com o parâmetro de tempo de espera.
 *
 * @param uint O tipo do pino GPIO que controla o servomotor.
 * @param uint16_t O tipo da largura de pulso em microsegundos que define a posição do servomotor.
 * @param uint16_t O tipo do tempo de espera em milissegundos após o ajuste da largura de pulso.
 */
void SetServoPulseWidth(uint, uint16_t, uint16_t);


/**
 * @brief Move o servomotor periodicamente entre dois ângulos.
 * 
 * Esta função move o servomotor de forma progressiva entre dois valores de largura de pulso, 
 * controlando o movimento entre 0° e 180° e vice-versa. O movimento pode ser suavizado com a 
 * alteração do incremento/decremento de largura de pulso, e o tempo de espera entre os movimentos 
 * é configurado com o parâmetro de tempo de espera.
 *
 * @param uint O tipo do pino GPIO que controla o servomotor.
 * @param uint16_t O tipo do valor mínimo da largura de pulso (em microsegundos), representando o ângulo mínimo.
 * @param uint16_t O tipo do valor máximo da largura de pulso (em microsegundos), representando o ângulo máximo.
 * @param uint16_t O tipo do valor do incremento ou decremento da largura de pulso entre os movimentos, em microsegundos.
 * @param uint16_t O tipo do tempo de espera em milissegundos entre os ajustes da largura de pulso durante o movimento.
 */
void MoveServoPeriodically(uint, uint16_t, uint16_t, uint16_t, uint16_t);



#endif