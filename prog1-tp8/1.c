#include <stdio.h>
#include <stdlib.h>
int main(){
        srand(10);
        int results[6]={0};
        for(int i=0; i<30; i++) {
                results[rand()%6]++;
        }
        for(int i=0; i<6; i++) {
                for(int j=0; j<results[i]; j++) {
                        printf("*");
                }
                printf("\n");
        }
        return 0;
}
