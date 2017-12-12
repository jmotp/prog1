#include <stdio.h>
int main() {
    int a,sum=0,n=0;
  for(int i =0 ;i<53;i++){
    scanf("%d",&a);
    sum+=a;
    if(a<35)n++;
  }
  printf("Total de familias com crianças de idade inferior a 6 anos :%d\nFreguesias com menos de 35 familias com crianças de idade inferior a 6 anos %d (%.2f%%)\n",sum,n,(float)n/53*100 );
  return 0;
}
