#include <stdio.h>
#include "brc.h"

inteiro principal(){
    inteiro num_int;
    real num_real;
    escrevaC("Digite um numero inteiro: ");
    leiaC(" %d", &num_int);
    escrevaC("O numero inteiro digitado foi: %d\n", num_int);
    escrevaC("Digite um numero real: ");
    leiaC(" %f", &num_real);
    escrevaC("O numero real digitado foi: %f\n", num_real);
    retorne 0;
}