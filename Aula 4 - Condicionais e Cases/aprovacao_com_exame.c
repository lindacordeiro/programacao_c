#include <stdio.h>
#include "brc.h"

real principal(){
    real n1, n2, n3, n4, ne, md1;
    escrevaC("Digite a primeira nota: ");
    leiaC(" %f", &n1);
    escrevaC("Digite a segunda nota: ");
    leiaC(" %f", &n2);
    escrevaC("Digite a terceira nota: ");
    leiaC(" %f", &n3);
    escrevaC("Digite a quarta nota: ");
    leiaC(" %f", &n4);
    md1 = (n1 + n2 + n3 + n4) / 4;

    se (md1>=7){
        escrevaC("\nAprovado\n");
    }
    senao {
        escrevaC("Digite a quinta nota: ");
        leiaC(" %f", &ne);
        md1 = (n1 + n2 + n3 + n4 + ne) / 5;

        se (md1>=5){
            escrevaC("\nAprovado em exame\n");
        }
        senao {
            escrevaC("\nReprovado\n");
        }
    }

    escrevaC("A media obtida foi %.2f", md1);
    retorne 0;
}

