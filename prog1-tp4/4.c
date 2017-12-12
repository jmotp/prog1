#include <stdio.h>

int main(){
  int n,fator=2;
  printf("Insira um numero?");
  scanf("%d",&n);
  while(n>1){
    if(n%fator==0){
      n/=fator;
      printf("%d ", fator);
    }else{
      fator++;
    }

  }
  printf("\n");
}
