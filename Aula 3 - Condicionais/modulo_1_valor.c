#include <stdio.h>
#include "brc.h"

inteiro principal(){
    real n;
    escrevaC("Digite um numero inteiro: ");
    leiaC(" %f", &n);

    se (n<0){
        escrevaC("O modulo de %f eh: %f.",n,(-n));
    }senao{
        escrevaC("O modulo de %f eh: %f.",n,n);
    }
    retorne 0;
}