#include <stdio.h>
#include <string.h>
void inverte(char * strOriginal, char * strInvertida){
    int j=0;
	for(int i=strlen(strOriginal)-2; i>=0; i--,j++) {
		strInvertida[j]=strOriginal[i];
	}
    strInvertida[j]='\0';

    return;
}
int main(){
	char strOriginal[100], strInvertida[100];
	fgets(strOriginal,100,stdin);
    printf("%s\n",strOriginal);
	inverte(strOriginal,strInvertida);
	printf("%s\n",strInvertida);
}
