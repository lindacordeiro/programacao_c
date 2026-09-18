#include <stdio.h>
#include "brc.h"

real principal(){
    real n1, n2, n3, n4, media;
    escrevaC("Digite a primeira nota: ");
    leiaC(" %f", &n1);
    escrevaC("Digite a segunda nota: ");
    leiaC(" %f", &n2);
    escrevaC("Digite a terceira nota: ");
    leiaC(" %f", &n3);
    escrevaC("Digite a quarta nota: ");
    leiaC(" %f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    escrevaC("A media das 4 notas dadas eh: %f\n", media);
    retorne 0;
}