#include <stdio.h>

int main(){
  int num1,num2;
  printf("Numero inteiro 1? ");
  scanf("%d",&num1 );
  printf("Numero inteiro 2? ");
  scanf("%d",&num2 );
  printf("%d %se multiplo de %d\n",num1,num1%num2==0?"":"nao ",num2 );
  return 0;
}
