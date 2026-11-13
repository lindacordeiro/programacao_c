#include <stdio.h>
#include "brc.h"

inteiro principal(){
    inteiro num = 1;
    inteiro quadrado;

    escrevaC("--------------------\n");
    escrevaC("Pre teste Verdadeiro\n");
    escrevaC("--------------------\n");

    enquanto(num<=20){
        quadrado = num * num;
        se(quadrado>=15 && quadrado<=200){
            escrevaC(" %d\n", quadrado);
        }
        num++;
    }

    escrevaC("---------------\n");
    escrevaC("Pre teste Falso\n");
    escrevaC("---------------\n");

    num = 1;

    enquanto(!(num>20)){
        quadrado = num * num;
        se(quadrado>=15 && quadrado<=200){
            escrevaC(" %d\n", quadrado);
        }
        num++;
    }


    retorne 0;
}