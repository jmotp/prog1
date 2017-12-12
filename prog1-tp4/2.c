#include <stdio.h>
#include <limits.h>

 int main(){
   float num,soma=0;
   int n=0,max,min;
   min=INT_MAX;
   max=INT_MIN;
   while(1){
     if(scanf("%f", &num) != 1){ //scanf retorna o numero de elementos lidos com sucesso
        n=n==0?1:n;
        break;
      }
      if(num>max)max=num;
      if(num<min)min=num;
      soma+=num;n++;
    }
    printf("A media dos numeros e %.2f, o maximo e %d e o minimo e %d.\n ",soma/n,max,min);
}
