
#include <stdio.h>
typedef struct{
    int timein;
    int timeout;
}acesso;

int main(){
    acesso acessos[100];
    int i=0;
    while(scanf("%d %d",&acessos[i].timein,&acessos[i].timeout)==2){
            if(i!=0&&acessos[i].timein-acessos[i-1].timeout<120){
                acessos[i-1].timeout=acessos[i].timeout;
                continue;
            }
            i++;
    }
    for(int j=0;j<i;j++){
        printf("%d:%d %d\n",j,acessos[j].timein,acessos[j].timeout);
    }
}
