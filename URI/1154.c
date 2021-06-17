#include <stdio.h>

int main(){

    int idade, cont=0;
    float soma=0;
    while(scanf("%d", &idade)>=0){
        if(idade<0) break;
        cont++;
        soma+=idade;
    }
    printf("%.2f\n", soma/cont);

    return 0;
}