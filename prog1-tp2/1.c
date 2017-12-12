#include <stdio.h>
#include <math.h>
int main(){
  int raio;
  printf("Raio? ");
  scanf("%d",&raio);
  printf("Perimetro = %.4f\n\n",3.1416*2*raio);
  printf("Area = %.4f\n",  3.1416*raio*raio);
  return 0;
}
