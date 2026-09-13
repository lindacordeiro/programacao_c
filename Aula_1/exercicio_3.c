#include <stdio.h>
#include "brc.h"

real principal(){
    real n1, n2, n3, n4, media;
    escrevaC("Digite a 1ª nota: ");
    leiaC(" %f", &n1);
    escrevaC("Digite a 2ª nota: ");
    leiaC(" %f", &n2);
    escrevaC("Digite a 3ª nota: ");
    leiaC(" %f", &n3);
    escrevaC("Digite a 4ª nota: ");
    leiaC(" %f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    escrevaC("A média das 4 notas dadas é: %f\n", media);
    retorne 0;
}