/* 
*Author: Paulo Akira (9083027)
 */

#include "adc.h"

///
/// Inicializa canal AN0 do conversor A/D
///
void adc_init_0(void){
    TRISA0 =1; // coloca R0 como entrada
    ANS0 = 1; // coloca o canal AN0 como analógico
    
    //FOSC = 20MHz -> TAD = 1.6micro segundos -> FOSC/32
    ADCS1 = 1;
    ADCS0 = 0;
    
    VCFG1 = 0; // Vss = 0V
    VCFG0 = 0; // Vdd = 5V
    
    ADFM = 1; //justificado à direita
    
    ADIE = 0; //sem interrupção
    
    ADON = 1; // liga o módulo ADC
    
    delay_ms(10); // tempo de espera para a aquisição
}

///
/// Faz a leitura do canal AN0 do conversor A/D
///
/// @return Retorna um inteiro sem sinal que corresponde a leitura do A/D 
///         justificado à direita ou à esquerda conforme a inicialização
///
unsigned int adc_read_0(void){
    unsigned int adc_result;
    
    GO_DONE = 1; // inicia a conversão    
    while(GO_DONE); // espera a conversão terminar
    
    adc_result = ADRESH*256 + ADRESL; // 16-bits (lê o resultado)
    
    ADIF = 0; // zera a flag
    
    return adc_result;
}