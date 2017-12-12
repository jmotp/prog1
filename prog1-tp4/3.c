#include <stdio.h>

int main(){
  int capital,anos,juros;
  float cumulativo=1;
  printf("Qual o capital inicial? ");
  scanf("%d",&capital);
  printf("Qual a taxa de juro dada pelo banco? ");
  scanf("%d",&juros);
  printf("Durantes quantos anos? ");
  scanf("%d",&anos);
  for(int i=0;i<anos;i++){
    cumulativo=cumulativo*(1+juros/100.0);
  }
  printf("O capital acumulado ao fim de %d anos e de %.3f euros\n",anos,capital*cumulativo);

}
