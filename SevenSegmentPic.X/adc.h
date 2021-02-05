/* 
 Paulo Akira (9083027)
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef ADC_H
#define	ADC_H

#include <xc.h> // include processor files - each processor file is guarded.
#include "delay.h"

///
/// Inicializa canal AN0 do conversor A/D
///
extern void adc_init_0(void);

///
/// Faz a leitura do canal AN0 do conversor A/D
///
/// @return Retorna um inteiro sem sinal que corresponde a leitura do A/D 
///         justificado à direita ou à esquerda conforme a inicialização
///
extern unsigned int adc_read_0(void);

#endif	/* ADC_H */

