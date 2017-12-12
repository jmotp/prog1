#include <stdio.h>
void swap(int * A,int * B){
  int tmp;
  tmp=*A;
  *A=*B;
  *B=tmp;
  return;
}

void ordena(int *valorA,int * valorB,int * valorC){
    if(*valorA<*valorB&&*valorA<*valorC){
        if(*valorB<*valorC){
          return;
        }//a,b,c
        else{
          swap(valorB,valorC);
          return;
        }//a,c,b
    }
    else if(*valorB<*valorA&&*valorB<*valorC){
            if(*valorA<*valorC){
              swap(valorA,valorB);
              return;
            }//b,a,c
            else{
              swap(valorA,valorB);
              swap(valorA,valorC);
              return;
            }//b,c,a
    }
    else
        if(*valorB<*valorA){
          swap(valorA,valorC);
          return;
        }//c,b,a
        else{
          swap(valorA,valorC);
          swap(valorB,valorC);
          return;
        }//c,a,b
        return;
}
int main(){
    int a,b,c;
    printf("Insira dois valores:");
    scanf("%d%d%d",&a,&b,&c);
    ordena(&a,&b,&c);
    printf("%d %d %d\n",a,b,c );
}
