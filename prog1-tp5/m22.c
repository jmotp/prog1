#include <stdio.h>
void converteBinario(int num){
  printf("%d",num/256);
  num=num-(num/256)*256;
  printf("%d",num/128);
  num=num-(num/128)*128;
  printf("%d",num/64);
  num=num-(num/64)*64;
  printf("%d",num/32);
  num=num-(num/32)*32;
  printf("%d",num/16);
  num=num-(num/16)*16;
  printf("%d",num/8);
  num=num-(num/8)*8;
  printf("%d",num/4);
  num=num-(num/4)*4;
  printf("%d",num/2);
  num=num-(num/2)*2;
  printf("%d",num/1);
  num=num-(num/1)*1;


}
int main() {
  int num;
  char base;
  while(scanf("%d %c",&num,&base)!=EOF){
    if(base=='b'){printf("%d ",num);converteBinario(num);printf("\n");}
    if(base=='o')printf("%d %o\n",num,num);
    if(base=='h')printf("%d %X\n",num,num);

  }
}
