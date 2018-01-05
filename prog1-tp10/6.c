#include <stdio.h>

#include <string.h>

char converte(char c,int shift){
    c=c-97;

    c=c+shift;
    c=c%26;
    if(c<0)c=26+c;
    return c+97;
}

int main(){
    char string;
    int shift;
    scanf("%c %d", &string, &shift);

        printf("%c\n",converte(string,shift));


}
