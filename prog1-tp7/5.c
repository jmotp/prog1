#include <stdio.h>
void quociresto(int dividendo, int divisor, int *quociente, int *resto){
  *quociente=0;
  while(dividendo>=divisor){
    dividendo-=divisor;
    (*quociente)++;
  }
  *resto=dividendo;
}
int soma(int n){
  int sum=0;
  int x;
  while(n>0){
    quociresto(n,10,&n,&x);
    sum+=x;
  }
  return sum;
};
int par(int n){
  int quoc,resto;
  quociresto(n,2,&quoc,&resto);
  if (resto==0)return 1;else return 0;
}
int main(){

    int a,b,quoc,resto,sum_test,par_test;
    printf("Quociente e Resto (x,y)");
    scanf("%d%d",&a,&b);
    quociresto(a,b,&quoc,&resto);
    printf("%d %d\nSoma dos digitos(x):",quoc,resto );
    scanf("%d",&sum_test);
    printf("%d\nNumero e' par?:(x)",soma(sum_test));
    scanf("%d",&par_test);

    printf("%s\n",par(par_test)?"sim":"nao");

}
