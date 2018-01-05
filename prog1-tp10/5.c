#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    gets(string);
    int num = 0;
    for(int i =0 ; i < strlen(string);i++){
        if(string[i]==' ')num++;
    }
    int letras=strlen(string)-num;
    num++;
    printf("%d %f",num, (float)letras/num );
}
