#include <stdio.h>
#include <string.h>
int capicua(char* str){
    for(int i = 0; i < strlen(str)/2+1;i++){
        if(str[i]!=str[strlen(str)-i-1])return 0;
    }
    return 1;
}

int main(int argc, char const *argv[]) {
    char str[100];
    scanf("%s",str );
    printf("%s %s capicua",str,capicua(str)?"e":"nao e");
    return 0;
}
