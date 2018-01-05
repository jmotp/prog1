#include <stdio.h>
#include <math.h>
int grau(int *poli){
    int i=0;
    while(poli[10-i]==0&&i<10)i++;
    return 10-i;

}

int lerPoli(int *poli){
    for(int i =0 ; i<11;i++){
        printf("Insira o coeficiente de grau %d:",10-i  );
        scanf("%d",&poli[10-i]);
    }
    return grau(poli);
}

void escrevePoli( int* poli,int grau){
    for(int i=grau;i>-1;i--){
        printf("%dx^%d",poli[i],i);
        if(i>0)printf(" + ");
    }
    printf("\n");
}

void adicionaPoli(int *p1, int *p2, int *pRes, int maiorGrau){
    for(int i=0; i < 11;i++){
        pRes[i]=p1[i]+p2[i];
    }
    return;
}

float calc(int *poli, int grau, float x){
    int sum=0;
    for(int i=0;i<=grau;i++){
        printf("%f levantado a %d\n",x,i );
        sum+=poli[i]*pow(x,i);
    }
    return sum;
}
