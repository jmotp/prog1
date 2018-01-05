#include <stdio.h>

#include <string.h>

char converte(char c,int shift){
    c=c-97;
    if(c>=0&&c<=26){
        c=c+shift;
        c=c%26;
        if(c<0)c=26+c;
    }
    return c+97;
}



int main(){
    char string[100];
    int shift;
    fgets(string,100,stdin);
    scanf("%d",&shift );
    for(int i=0;i<strlen(string)-1;i++){
        printf("%c",converte(string[i],shift));
    }


}
