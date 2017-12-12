#include <stdio.h>
#define atm_P 1.01325E5
#define atm_b 1.01325
#define atm_p 14.6959487755
#define atm_H 760
int main() {
  char a;
  float n,sum=0;
  while (1) {    /* code */
    if(scanf("%f %c",&n,&a)!=2)break;
      switch (a) {
        case 'P':printf("%.4f",n/atm_P);sum+=n/atm_P;break;
        case 'p':printf("%.4f",n/atm_p);sum+=n/atm_p;break;
        case 'b':printf("%.4f",n/atm_b);sum+=n/atm_b;break;
        case 'H':printf("%.4f",n/atm_H);sum+=n/atm_H;break;
        default: printf("Unidade de medida desconhecida");
      }
      printf("\n");
  }
  printf("%.4f\n",sum);
}
