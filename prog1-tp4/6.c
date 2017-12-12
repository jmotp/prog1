#include <stdio.h>

int main(){
  int n=0;
  float pa,pb,ta,tb;
  printf("Pais A (pop/taxa): ");
  scanf("%f %f",&pa,&ta);
  printf("Pais B (pop/taxa): ");
  scanf("%f %f",&pb,&tb);

  while(pa>pb){
    pa=pa+pa*(ta/100);
    pb=pb+pb*(tb/100);
    n++;
  }
  printf("Populacao de B ultrapassara a de A em %d anos.\n",n);
}
