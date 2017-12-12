#include <stdio.h>

int main(){
  int n,soma=0;
  printf("Insira um numero?");
  scanf("%d",&n);
  while(n>0){
    soma+=n%10;
    n/=10;
  }
  printf("A soma dos digitos e %d.\n",soma);
}
