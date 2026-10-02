#include <stdio.h>
#include "brc.h"

inteiro principal() {
    caractere nome[50];
    caractere sexo;
    escrevaC("Informe o nome da pessoa (apenas 1 nome): ");
    leiaC(" %s", &nome);
    escrevaC("Informe o sexo da pessoa, M ou m para masculino e F ou f para feminino: ");
    leiaC(" %c", &sexo);
    escrevaC("O nome da pessoa eh: %s", nome);
    escrevaC(", e seu sexo eh: %c", sexo);
    retorne 0;
}
