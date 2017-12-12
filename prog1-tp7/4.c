#include <stdio.h>
#include <math.h>
void cartesianas_polares(float x, float y, float *r, float *theta){
    *r=sqrt(x*x+y*y);
    *theta=atan2(y,x);
}
void polares_cartesianas(float r, float theta, float *x, float *y){
    *x=r*cos(theta);
    *y=r*sin(theta);
}
int main(){
  float x,y,r,theta,a,b;
  int modo;
  printf("Selecionar Conversão:\n");
  printf("Cartesianas para polares:(1)\n");
  printf("Polares para cartesianas:(2)\n");
  scanf("%d",&modo);
  printf("Insira %s:\n",modo==1?"(x,y)":"r<O");
  scanf("%f %f",&a,&b);
  modo==1?cartesianas_polares(a,b,&r,&theta):polares_cartesianas(a,b,&x,&y);
  printf("%f %f\n",modo==1?r:x,modo==1?theta:y);

}
