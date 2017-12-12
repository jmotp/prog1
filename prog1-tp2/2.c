#include <stdio.h>

int main(){
  float C;
  printf("Qual a temperatura? ");
  scanf("%f", &C);
  printf("%.1f C = %.2f K\n%.1f C = %.2f F\n",C,C+273.15,C,C*9/5+32 );
  return 0;
}
