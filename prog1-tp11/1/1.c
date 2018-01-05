#include "poli.c"
#include <stdio.h>

int main(){
    int Pol1[11]={0};
    int Pol2[11]={0};
    int PolR[11]={0};
    lerPoli(Pol1);
    escrevePoli(Pol1,grau(Pol1));
    lerPoli(Pol2);
    escrevePoli(Pol2,grau(Pol2));
    adicionaPoli(Pol1,Pol2,PolR,grau(Pol1)>grau(Pol2)?grau(Pol1):grau(Pol2));
    escrevePoli(PolR,grau(PolR));
    printf("%f", calc(PolR,grau(PolR),10));
}
