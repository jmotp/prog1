#include <stdio.h>
void preencher_vetor(float * v,int n){
        for(int i=0; i<n; i++) {
                printf("Introduza o elemento %d:",i+1);
                scanf("%f",&v[i]);
        }
        return;
}

float somatorio_vetor(float v[], int n){
        float soma=0;
        for(int i=0; i<n; i++) {
                soma+=v[i];
        }
        return soma;
}

void imprimir_vetor(float v[], int n){
        printf("{");
        for(int i=0; i<n; i++) {
                printf("%.1f",v[i]);
                if(i<n-1) printf(" ");
        }
        printf("}\n");
        return;
}
int main(){
        float vector[15];
        int n,a;
        while(printf("Quantos elementos pretende armazenar?\n")&&scanf("%d",&n)&&n>15) {
                printf("O numero de elementros esta limitado a 15!\n");
        };
        preencher_vetor(vector,n);
        printf("O vetor lido foi: ");
        imprimir_vetor(vector,n);
        printf("e a soma dos seus elementos e' %.1f \n", somatorio_vetor(vector,n) );

}
