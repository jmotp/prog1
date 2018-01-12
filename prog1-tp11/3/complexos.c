#include "complexos.h"
#include <stdio.h>
#include <math.h>

complexo leComplexo(){
    complexo num;
    printf("Insira a parte Real:");
    scanf("%f",&num.real);
    printf("Insira a parte Imaginaria:");
    scanf("%f",&num.img);
    return num;
}

void escreveComplexo(complexo c){
    printf("%f + %fi\n",c.real,c.img);
}

complexo somaComplexo(complexo c1, complexo c2){
    complexo x;
    x.real=c1.real+c2.real;
    x.img=c1.img+c2.img;
    return x;
}

double modComplexo(complexo c){
    return sqrt(c.real*c.real+c.img*c.img);
}

double argComplexo(complexo c){
    return atan2(c.img,c.real);
}
