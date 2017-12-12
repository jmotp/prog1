#include <stdio.h>
int pos(int x, int y, int tamanho){return x + y * tamanho;}
int Ni=10;
void imprimeMatriz(int *matriz, int N){
    printf("  1  2  3  4  5  6  7  8  9 10\n");
    for(int i=0;i<N;i++){
        printf("%-3d",i);
        for(int j=0;j<N;j++){
            printf("%-3d",matriz[pos(i,j,N)]);
        }
        printf("\n");
    }
}

void produtoEscalar(int *matriz, int N, int escalar){
    for(int i=0;i<N*N;i++){
        matriz[i]*=escalar;
    }
    return;
}
void multMatrizes(int *matriz, int *mult, int *resultado, int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            resultado[pos(i,j,N)]=matriz[pos(i,j,N)]*mult[j];
        }
    }
}

int main(){
    int mult[Ni];
    for(int i=0;i<Ni;i++){
        mult[i]=i;
    }
    int vector[Ni*Ni],resultado[Ni*Ni];
    printf("  1  2  3  4  5  6  7  8  9  10\n");
    for(int i=0;i<Ni;i++){
        printf("%-2d",i);
        for(int j=0;j<Ni;j++){
            vector[pos(i,j,Ni)]=pos(j,i,Ni);
        }
    }
    imprimeMatriz(vector,Ni);
    produtoEscalar(vector,Ni,1);
    imprimeMatriz(vector,Ni);
    multMatrizes(vector,mult,resultado,Ni);
    imprimeMatriz(resultado,Ni);
}
