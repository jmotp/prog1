#include <stdio.h>
void ordena(float notas[][2], int N){

    for(int i = 0 ; i < N ;i++){
        int out=0;
        for (int j=i,max=-1; j<N ;j++){
            if(notas[j][1]>max){max=notas[j][1];out = j;}
        }
        float temp[2];
        temp[0]=notas[i][0];
        temp[1]=notas[i][1];
        notas[i][0]=notas[out][0];
        notas[i][1]=notas[out][1];
        notas[out][0]=temp[0];
        notas[out][1]=temp[1];
    }
}

int main(){

    int dados_aluno[4][3];
    float media_aluno[4];
    float notas[4][2];

    for(int i =0 ; i< 4;i++){
        printf("Dados do aluno %d: ",i+1);
        scanf("%d %d %d",&dados_aluno[i][0],&dados_aluno[i][1],&dados_aluno[i][2]);
        notas[i][0]= dados_aluno[i][0];
    }
    printf("%-*s%-*s\n",8,"Numero",8,"Media");
    for(int i =0 ; i< 4;i++){
        media_aluno[i]=(dados_aluno[i][1]+dados_aluno[i][2])/2.0;
        notas[i][1]= media_aluno[i];
    }
    ordena(notas,4);
    for(int i =0 ; i< 4;i++){
        printf("%-*.0f%-*.1f\n",8,notas[i][0],8,notas[i][1]);
    }
}
