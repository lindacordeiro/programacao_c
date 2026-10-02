#include <stdio.h>
#include "brc.h"

real principal(){
    real num_real, quadrado;
    escrevaC("Digite um numero real: ");
    leiaC(" %f", &num_real);
    quadrado = num_real * num_real;
    escrevaC("O quadrado de %f eh: %f\n", num_real, quadrado);
    retorne 0;
}