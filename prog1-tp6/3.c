#include <stdio.h>
#include <math.h>
long long int factorial(int n){
  long long int fac=n;
  for(int i=fac-1;i>0;i--){
    fac=fac*i;
  }
  return fac;
}



double term(int ord,double x){
  return pow(-1,ord+1)*pow(x,2*ord-1)/factorial(2*ord-1);
}
int main() {
  float x,tolerancia;
  int n=1;
  double sum=0;
  scanf("%f %f",&x,&tolerancia );

  while(term(n,x) > tolerancia || term(n,x) < -tolerancia){
    sum+=term(n,x);
    n++;
  };
  printf("%f\n",sum );

}
