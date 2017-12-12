#include <stdio.h>
#include <math.h>
void root(int a,int b,int c){
    int terno=b*b-4*a*c;
    if(terno>0){
      printf("%d",terno);
      printf("As raizes sao: %.2f e %.2f\n",((-b)+sqrt(terno))/2*a,((-b)-sqrt(terno))/2*a);
    }
    else if(terno==0)printf("Tem uma raiz dupla: %.2f \n",-(float)b/(2*a) );
    else printf("Tem raizes complexas: %.2f+%.4fi e  %.2f-%.4fi\n", -(float)b/(2*a),sqrt(-terno)/(2*a),-(float)b/(2*a),sqrt(-terno)/(2*a));
}
int main(){
  int a,b,c;
  printf("Insira o valor de a:");
  scanf("%d",&a);
  printf("Insira o valor de b:");
  scanf("%d",&b);
  printf("Insira o valor de c:");
  scanf("%d",&c);
  root(a,b,c);
}
