#include <stdio.h>
int horasMin(int minutos,int*horas,int*min){
  *horas=minutos/60;
  *min=minutos%60;
  if(*horas>24)return 1;else return 0;
}
int main(){
    int horas,minutos,leitura;
    scanf("%d",&leitura);
    int a=horasMin(leitura,&horas,&minutos);
    printf("%d minutos corresponde a %02dh:%02dm e %s e' superior a 1 dia\n",leitura, horas, minutos,a?"":"não" );

}
