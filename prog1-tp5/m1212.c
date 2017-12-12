#include <stdio.h>
char movimento(int x0,int y0,int x1,int y1){
  if(y1-y0==1)return 'C';
  if(y1-y0==-1)return 'B';
  if(x1-x0==1)return 'D';
  if(x1-x0==-1)return 'E';
  return 0;
}
int main() {
    int x,y,x0,y0;
    scanf("%d %d",&x0,&y0);
    while(scanf("%d %d",&x,&y)!=EOF){
      printf("%c", movimento(x0,y0,x,y));
      y0=y;x0=x;
    }
    printf("\n");
}
