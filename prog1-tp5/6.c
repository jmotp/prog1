#include <stdio.h>
#include <math.h>
void draw(char chr,int l,int c){
    for(int i =0;i<c;i++){
      printf("%c",chr);
    }
    printf("\n");
    for(int i =0;i<l-2;i++){
      printf("%c",chr);
      for(int j =0;j<c-2;j++){
        printf("_");
      }
      printf("%c",chr);
      printf("\n");
    }
    for(int i =0;i<c;i++){
      printf("%c",chr);
    }
    printf("\n");

}
int main(){
  char chr;
  int l,c;
  printf("Insira o carater:");
  scanf("%c",&chr);
  printf("Insira o no de linhas:");
  scanf("%d",&l);
  printf("Insira o no de colunas:");
  scanf("%d",&c);
  draw(chr,l,c);
}
