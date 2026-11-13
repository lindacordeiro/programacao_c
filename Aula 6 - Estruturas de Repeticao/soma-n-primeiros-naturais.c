#include <stdio.h>
#include "brc.h"

inteiro principal(){
    inteiro num = 1;
    inteiro soma = 0;

    escrevaC("---------------------------------------------------\n");
    escrevaC("Pos teste Verdadeiro\n");
    escrevaC("--------------------\n");

    faca{
        soma += num;
        num++;
    }enquanto(num<=100);

    escrevaC("A soma dos 100 primeiros numeros naturais eh %d\n",soma);
    escrevaC("---------------------------------------------------\n\n");

    escrevaC("---------------------------------------------------\n");
    escrevaC("Pos teste Falso\n");
    escrevaC("---------------\n");

    num = 1;
    soma = 0;

    faca{
        soma += num;
        num++;
    }enquanto(!(num>100));

    escrevaC("A soma dos 100 primeiros numeros naturais eh %d\n",soma);
    escrevaC("---------------------------------------------------");

    retorne 0;
}
