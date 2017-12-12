#include <stdio.h>
int * vmaior(int *valor1,int * valor2){
  if(*valor1>*valor2)return valor1;
  else return valor2;
}
int main(){
    int a,b;
    printf("Insira dois valores:");
    scanf("%d%d",&a,&b);
    printf("Endereco do maior %X e conteudo %d\n",vmaior(&a,&b),*vmaior(&a,&b));
}
