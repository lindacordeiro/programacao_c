#include <stdio.h>
#include "brc.h"

inteiro principal(){
    inteiro num_int;
    real num_real;
    escrevaC("Digite um número inteiro: ");
    leiaC(" %d", &num_int);
    escrevaC("O número inteiro digitado foi: %d\n", num_int);
    escrevaC("Digite um número real: ");
    leiaC(" %f", &num_real);
    escrevaC("O número real digitado foi: %f\n", num_real);
    retorne 0;
}