#include <stdio.h>
#include "brc.h"

inteiro principal() {
    inteiro horas_trab;
    real val_hora_aula, perc_desc, sal_bruto, tot_desc, sal_liquido;
    escrevaC("Esse programa realiza o calculo de salario\n\n\"");
    escrevaC("Informe a quantidade de horas trabalhadas no mes: ");
    leiaC(" %d", &horas_trab);
    escrevaC("Informe o valor pago por hora-aula: ");
    leiaC(" %f", &val_hora_aula);
    escrevaC("Entre com o percentual de desconto INSS: ");
    leiaC(" %f", &perc_desc);

    //Calculo:
    sal_bruto = horas_trab * val_hora_aula;
    tot_desc = (perc_desc/100) * sal_bruto;
    sal_liquido = sal_bruto - tot_desc;

    //Exibindo resultados:

    escrevaC("\n");
    escrevaC("O salario bruto do professor eh: %.2f\n", sal_bruto);
    escrevaC("O salario liquido do professor eh: %.2f\n", sal_liquido);
    retorne 0;
}
