#include <stdio.h>

int main(){
  char n;
  int a=0,e=0,i=0,o=0,u=0;
  printf("Qual e' a frase?");
  while(scanf("%c",&n)&&n!='.'){
    if(n<96)n+=32;
    switch(n){
      case 'a':a++;break;
      case 'e':e++;break;
      case 'i':i++;break;
      case 'o':o++;break;
      case 'u':u++;break;

    }
  }
  printf("A - %d\n",a);
  printf("E - %d\n",e);
  printf("I - %d\n",i);
  printf("O - %d\n",o);
  printf("U - %d\n",u);
}
