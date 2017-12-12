#include <stdio.h>
float pesoideal(float altura,char sexo){
  if(sexo=='M'){
    return 72.7*altura-58;
  }
  else{
    return 62.1*altura-44.7;
  }
}
int main(){
  float altura;
  char sexo;
  printf("Insira a altura da pessoa:");
  scanf("%f",&altura);
  printf("Insira o sexo da pessoa(M/F):");

  scanf(" %c",&sexo );
  printf("O peso ideal seria de %0.2f quilos\n",pesoideal(altura,sexo) );

}
