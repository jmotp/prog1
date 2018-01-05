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

void ataque(char string[]){
    for(int i =0 ; i< 26;i++){
        for(int j=0;j<strlen(string)-1;j++){
            printf("%c",converte(string[j],i));
        }
        printf("\n");
    }
}

int main(){
    char string[100];
    int shift;
    fgets(string,100,stdin);
    ataque(string);


}
