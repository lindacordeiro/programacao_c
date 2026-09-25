#include <stdio.h>
#include "brc.h"

inteiro principal(){
    real a, b;
    escrevaC("Digite o valor do primeiro numero: ");
    leiaC(" %f", &a);
    escrevaC("Digite o valor do segundo numero: ");
    leiaC(" %f", &b);

    se (a>b){
        escrevaC("O modulo de %f - %f eh: %f.",a,b,(a-b));
    }senao{ //incluindo valores iguais
        escrevaC("O modulo de %f - %f eh: %f.",b,a,(b-a));
    }
    retorne 0;
}