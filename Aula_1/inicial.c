#include <stdio.h>
#include "brc.h"

inteiro principal(){
    inteiro A, B, X;
    escrevaC("Digite o primeiro valor para a soma: ");
    leiaC(" %d", &A);
    escrevaC("\n");
    escrevaC("Digite o segundo valor para a soma: ");
    leiaC(" %d", &B);
    X = A + B;
    escrevaC("\n\n");
    escrevaC("O valor da soma e: %d", X);
    retorne 0;
}