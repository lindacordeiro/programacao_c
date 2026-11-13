#include <stdio.h>
#include "brc.h"

inteiro principal(){
    inteiro num = 0;
    inteiro divisor;

    escrevaC("Os numeros impares situados entre 0 e 20 sao:\n");

    enquanto(num<=20){
        divisor = num%2;
        se(divisor==1){
            escrevaC(" %d\n",num);
        }
        num++;
    }
    retorne 0;
}
