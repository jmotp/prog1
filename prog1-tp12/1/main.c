#include <stdio.h>

typedef struct{
    char nome[100];
    int tarefas[100];
    int tamanho;
    } Trabalho;

int main(){
    Trabalho trabalho[100];
    int i =0;
    FILE * f = fopen("input.txt","r");
    while(fscanf(f,"%s",trabalho[i].nome)!=EOF){
        int j=0;
        while(fscanf(f,"%d",&trabalho[i].tarefas[j])&& trabalho[i].tarefas[j]!=-1){
            j++;
        }
        trabalho[i].tamanho=j;
        i++;
    }
    int min=1000;
    int max=0;
    int dia =0;
    for(int j=0;j<i-1;j++){
        if(trabalho[j].tamanho<min)min=trabalho[j].tamanho;
        int count =0;
        for(int m=0;m<trabalho[j].tamanho;m++){
            count+=trabalho[j].tarefas[m];
        }
        if(count>max){
            max=count;
            dia=j;
        }

    }
    int diam;
    max=0;
    for(int j=0;j<i;j++){
        int count =1;
        for(int m=j+1;m<i;m++){
            if(trabalho[j].tamanho==trabalho[m].tamanho)
            count++;


        }
        if(count>max){max=count;diam=trabalho[j].tamanho;}
    }

    printf("%d\n",min);
    printf("%d\n",diam );
    printf("%s\n",trabalho[dia].nome);
}
