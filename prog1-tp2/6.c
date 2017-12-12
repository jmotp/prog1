#include <stdio.h>

int main(){
  int n;
  printf("Quantos segundos? ");
  scanf("%d", &n );
  printf("%d segundos correspondem a %d dia, %d horas, %d minutos e %d segundos\n",n,n/(24*3600),n%(24*3600)/3600,n%3600/60,n%60);
  return 0;
}
