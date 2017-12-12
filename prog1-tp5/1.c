#include <stdio.h>
#include <stdlib.h>
int aleatorio(int limiteInferior,int limiteSuperior){
  return (rand())%(limiteSuperior-limiteInferior+1)+limiteInferior;
}
int main(){
  int n,l=0;
  printf("Quantos lancamentos?");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    if(aleatorio(1,6)==6)l++;
  printf("A face 6 saiu %d vezes.\n",l );
}
