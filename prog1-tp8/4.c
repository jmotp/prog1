#include <stdio.h>
void preencher_vetor(float * v,int n){
        for(int i=0; i<n; i++) {
                printf("Introduza o elemento %d:",i+1);
                scanf("%f",&v[i]);
        }
        return;
}

float avg(float v[]){
        float soma=0;
        for(int i=0; i<10; i++) {
                soma+=v[i];
        }
        return soma/10;
}

float max(float x[]){
        float max=-100000000;
        for (int i = 0; i <10; i++) {
                if(x[i]>max) max=x[i];
        }
        return max;
}

float min(float x[]){
        float min=100000000;
        for (int i = 0; i <10; i++) {
                if(x[i]<min) min=x[i];
        }
        return min;
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
        preencher_vetor(vector,10);
        printf("%.2f\n",avg(vector));
        printf("%.1f\n",max(vector));
        printf("%.1f\n",min(vector));
        printf("O vetor lido foi: ");
        imprimir_vetor(vector,10);

}
