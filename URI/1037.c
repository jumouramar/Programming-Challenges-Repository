#include <stdio.h>

int main(){

    double valor;
    scanf("%lf", &valor);

    if(valor>=0 && valor<=25){
        puts("Intervalo [0,25]");
    }
    else if(valor>0 && valor<=50){
        puts("Intervalo (25,50]");
    }
    else if(valor>0 && valor<=75){
        puts("Intervalo (50,75]");
    }
    else if(valor>0 && valor<=100){
        puts("Intervalo (75,100]");
    }
    else {
        puts("Fora de intervalo");  
    }

    return 0;
}