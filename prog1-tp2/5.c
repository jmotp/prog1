#include <stdio.h>

int main(){
  float num;
  int n;
  printf("Insira um numero: ");
  scanf("%f", &num );
  if(num>0)n=(int)num+0.5;
  else n=(int)num-0.5;
  printf("%d %d\n",!(n%2)?n-2:n-1,!(n%2)?n+2:n+1 );
  return 0;
}
