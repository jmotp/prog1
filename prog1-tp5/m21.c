#include <stdio.h>

int main() {
  int ideal,n=0,min,max,nmin=0,nmax=0,valor,soma;
  float desvio;
  scanf("%d%d%d",&ideal,&min,&max);
  while (scanf("%d",&valor)==1) {

        if(valor<=max&&valor>=min){
          n++;
          soma+=valor;
        }
        else if(valor>max)nmax++;
            else nmin++;
  }
  desvio=((float)soma/n - ideal)/ideal*100;
  printf("Volume medio (desvio): %.2f (desvio de %.2f%%)\n",(float)soma/n,desvio>0?desvio:-desvio);
  printf("Garrafas eliminadas (volume por excesso): %d\n",nmax);
  printf("Garrafas eliminadas (volume por defeito): %d\n",nmin);

}
