#include <stdio.h>

int main(){
  int n,soma=0;
  printf("Insira o numero?");
  scanf("%d",&n);
  int n1=n;
  while(n1>0){
    soma=soma*10+n1%10;
    n1/=10;
  }
  printf("O inverso do numero %d e’ %d\n",n,soma);
}
