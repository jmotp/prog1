#include <stdio.h>
#include "complexos.h"

int main(){
    complexo x=leComplexo();
    escreveComplexo(x);
    x=somaComplexo(x,x);
    escreveComplexo(x);
    printf("%f\n",modComplexo(x));
    printf("%f\n",argComplexo(x));
}
