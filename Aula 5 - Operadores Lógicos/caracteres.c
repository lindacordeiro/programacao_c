#include <stdio.h>
#include "brc.h"

inteiro principal(){
    char nome[20];
    caractere sexo;

    escrevaC("Digite seu nome: ");
    leiaC(" %s", &nome);
    //escrevaC("%s\n", nome);

    escrevaC("Digite seu sexo: ");
    leiaC(" %c", &sexo);

    se (!(sexo == 'F' || sexo == 'f' || sexo == 'M' || sexo == 'm')){
        escrevaC("Sexo informado invalido");
    }

    se (sexo == 'F' || sexo == 'f'){
        escrevaC("Ilma Sra.");
        escrevaC(" %s", nome);
    }
    se (sexo == 'M' || sexo == 'm'){
        escrevaC("Ilmo Sr.");
        escrevaC(" %s", nome);
    }
    retorne 0;
}

