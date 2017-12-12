#include <stdio.h>
  int main() {
    int num,digito,num1,n=0;
    printf("Introduza um numero inteiro:");
    scanf("%d",&num);
    num1=num;
    printf("Introduza um digito:");
    scanf("%d",&digito);
    while (num>0) {
      if(num%10==digito){n++;}
      num=num/10;
    }
    printf("O digito %d aparece %d vezes no numero %d\n",digito,n,num1);
  }
