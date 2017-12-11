#include <stdio.h>

int compacta(char * orig, int N, char *dst){
    int dstsize=1;
    dst[0]=orig[0];
    for(int i=1;i<N;i++){
        if(orig[i]!=orig[i-1]){
            dst[dstsize++]=orig[i];
        }
    }
    dst[dstsize]='\0';
    return dstsize;
}
int main(){
    char a;
    int i=0;
    char vec[100],final[100];
    while(scanf("%c",&a)&&a!='.'){
        vec[i++]=a;
    }
    int size = compacta(vec,i,final);
    printf("%s",final);
}
