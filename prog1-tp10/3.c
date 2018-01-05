#include <stdio.h>

int multiplicacao( int primeiroNumero, int segundoNumero){
    if(segundoNumero==1)return primeiroNumero;
    else return primeiroNumero + multiplicacao(primeiroNumero,segundoNumero-1);
}

int main(){
    printf("%d",multiplicacao(11,11));
}
