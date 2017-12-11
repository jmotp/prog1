#include <stdio.h>

int main(){
    int dados_aluno[4][3];
    float media_aluno[4];
    for(int i =0 ; i< 4;i++){
        printf("Dados do aluno %d",i+1);
        scanf("%d %d %d",&dados_aluno[i][0],&dados_aluno[i][1],&dados_aluno[i][2]);
    }
    printf("%-*s%-*s%-*s%-*s\n",8,"Numero",8,"Nota 1",8,"Nota 2",8,"Media");
    for(int i =0 ; i< 4;i++){
        media_aluno[i]=(dados_aluno[i][1]+dados_aluno[i][2])/2.0;
        printf("%-8d%-*i%-*i%-*.1f\n",dados_aluno[i][0],8,dados_aluno[i][1] ,8,dados_aluno[i][2],8,media_aluno[i]);
    }
}
