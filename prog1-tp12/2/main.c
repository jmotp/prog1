#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char info [8][100];
} disco;



int main(){
    FILE * input;
    disco discos[100];
    input=fopen("discos.txt","r");
    int i=0;
    while(!feof(input)){
        char buffer[100];
        char input_buffer[1000];
        strcpy(input_buffer,"");
        fgets(input_buffer,1000,input);
        printf("a\n");
        int n=0;
        for(int j=0;j<8;j++){
            while(input_buffer[n]!='|'&&input_buffer[n]!='\n'){
                char string[2] = {input_buffer[n],'\0'};
                strcat(discos[i].info[j],string);

                n++;

            }
            printf("%s ",discos[i].info[j] );
            n++;
        }
        i++;
    }
    for(int j = 0;j<i;j++){
        if(atoi(discos[j].info[2])>4){
            printf("%s %s %s\n",discos[j].info[0],discos[j].info[4],discos[j].info[5] );
        }
    }
}
