#include <stdio.h>

int main(){
  int n,soma=0;
  printf("altura?");
  scanf("%d",&n);
  for(int i=0;i<n-1;i++){
      for(int j=0;j<n-1-i-1;j++)printf("_");
      for(int j=0;j<i*2+1;j++)printf("*");
      printf("\n");
  }
  for(int j=0;j<n-2;j++)printf("_");printf("*\n");


}
