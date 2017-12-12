#include <stdio.h>
float hip(int a,float b){
    return a*b*b;
}
int main(){
  int a,lb,ub;
  float inc;
  scanf("%d",&a);
  scanf("%d%d",&lb,&ub);
  scanf("%f",&inc );
  for(float i=lb;i<=ub;i+=inc){
    printf("f(%.1f)=%.1f\n",i,hip(a,i) );
  }

}
