#include <stdio.h>
#include "brc.h"

inteiro principal(){
    inteiro a, b, c, d, e, maior, menor, cont, vetor[5];
    escrevaC("Digite o primeiro numero: ");
    leiaC(" %d", &a);
    vetor[0] = a;

    escrevaC("Digite o segundo numero: ");
    leiaC(" %d", &b);
    vetor[1] = b;

    escrevaC("Digite o terceiro numero: ");
    leiaC(" %d", &c);
    vetor[2] = c;

    escrevaC("Digite o quarto numero: ");
    leiaC(" %d", &d);
    vetor[3] = d;

    escrevaC("Digite o quinto numero: ");
    leiaC(" %d", &e);
    vetor[4] = e;

    maior = vetor[0];

    para(cont = 1; cont<=4; cont++){
        se (vetor[cont]>maior){
            maior = vetor[cont];
        }
    }

    menor = vetor[0];

    para(cont = 1; cont<=4; cont++){
        se (vetor[cont]<menor){
            menor = vetor[cont];
        }
    }

    escrevaC("O maior dos numeros inseridos eh: %d\n", maior);
    escrevaC("O menor dos numeros inseridos eh: %d", menor);

    retorne 0;
}
