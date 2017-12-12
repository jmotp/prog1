#include <stdio.h>

int procuraTodos(int *V,int N, int x, int * posicoes, int *nPosicoes){
    *nPosicoes=0;
    for(int i=0;i<N;i++){
        if(V[i]==x){
            posicoes[(*nPosicoes)++]=i;
        }
    }
    if(nPosicoes>0)return 1;else return 0;
}

int main(){
    int N,scan[100],x,final[100],nPosicoes;
    scanf ("%d",&N);
    for (int i = 0; i < N; i++) {
        scanf("%d",&scan[i]);
    }
    scanf("%d",&x);
    procuraTodos(scan,N,x,final,&nPosicoes);
    for (int i = 0; i < nPosicoes; i++) {
        printf("%d: %d\n",final[i]+1,scan[final[i]]);
    }
    printf("%d",nPosicoes );
}
