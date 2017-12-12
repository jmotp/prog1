#include <stdio.h>

int main(){
  float num;
  printf("Insira um numero: ");
  scanf("%f", &num );
  printf("Numero com 3 casas decimais = %.3f\n",(float)( (int)(num*1000) /1000.000) );
  printf("Parte inteira = %d\n",(int)num);
  printf("Parte decimal = %f\n",num-(int)num );
  return 0;


}
