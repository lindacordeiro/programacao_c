#include "brc.h"
#include <stdio.h>
#include <math.h>

int main(){
    real a, b, c, delta, solucao;
    escrevaC("Esse programa calcula a formula de Bhaskara.\n\n");
    escrevaC("Digite o valor de a: ");
    leiaC(" %f", &a);
    escrevaC("Digite o valor de b: ");
    leiaC(" %f", &b);
    escrevaC("Digite o valor de c: ");
    leiaC(" %f", &c);
    delta = pow(b,2) - 4*a*c;

    se(delta<0){
        escrevaC("\nNao ha solucao real para os valores informados.");
    }
    senao{
        se(delta==0){
            solucao = -b / (2*a);
            escrevaC("\nHa apenas uma solucao real.\n");
            escrevaC("Para a = %.2f, b = %.2f e c = %.2f a solucao eh %.2f",a,b,c,solucao);
        }
        senao{
        }
            se(delta>0){
                escrevaC("\nHa duas solucoes reais e diferentes.\n");
                solucao = (-b - sqrt(delta))/(2*a);
                escrevaC("Para a = %.2f, b = %.2f e c = %.2f a solucao 1 eh %.2f\n",a,b,c,solucao);
                solucao = (-b + sqrt(delta))/(2*a);
                escrevaC("Para a = %.2f, b = %.2f e c = %.2f a solucao 2 eh %.2f",a,b,c,solucao);
            }
    }


    return 0;
}
