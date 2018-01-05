#include <stdio.h>
#include "datas.h"

int main(void) {

    data d;
    char data_String[100];
    scanf("%d %d %d",&d.dia,&d.mes,&d.ano);
    printf("%s\n",dataValida(d)?"Data Valida":"Data Invalida");
    escreveData(data_String,d);
    printf("%s\n", data_String);
    d=somaDias(d,-1);
    escreveData(data_String,d);
    printf("%s\n", data_String);
    d=somaDias(d,-10);
    escreveData(data_String,d);
    printf("%s\n", data_String);
  /* ler data
     validar data
     ler número de dias a avançar
     actualizar data
     imprimir data actualizada */

}
