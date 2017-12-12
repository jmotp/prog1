#include <stdio.h>
void op(int a,int b){
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %0.1f\n",a,b,a/(float)b);
    printf("%d %% %d = %d\n",a,b,a%b);
}
int main(){
  int a,b;
  printf("Introduza dois numeros:" );
  scanf("%d%d",&a,&b);
  op(a,b);
  op(b,a);

}
