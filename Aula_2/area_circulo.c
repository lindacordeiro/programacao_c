#include <stdio.h>
#include "brc.h"

constante real PI = 3.14159265;

inteiro principal(){
    real raio, area;
    escrevaC("Informe o tamanho do raio da circunferencia: ");
    leiaC(" %f", &raio);
    area = PI * raio * raio;
    escrevaC("\n");
    escrevaC("A area da circunferencia eh: %f", area);
    retorne 0;
}
