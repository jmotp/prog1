#include <stdio.h>
int contaRepeticao(int v[],int tamanhoVetor,int numero){
        int count=0,save=-1; int max=0;
        for(int i=0; i<tamanhoVetor; i++) {
                count =0;
                if(v[i]==numero) {
                        while(v[i]==numero) {
                                count++;
                                i++;
                        }
                }
                if(count>max) max=count;

        }
        return max;
}
int main(){
        int a,numero;
        int vec[100];
        int i;
        for(i=0; printf("Introduza um numero: ")&scanf("%d",&a)&&a!=-1; i++) {
                vec[i]=a;
        }
        printf("Numero a pesquisar: ");
        scanf("%d",&numero);
        printf("Maior sequencia com numeros %d tem tamanho %d\n", numero,contaRepeticao(vec,i,numero));
        return 0;
}
