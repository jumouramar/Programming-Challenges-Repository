#include <stdio.h>

int main(){

    int valor, par=0, positivo=0, negativo=0;

    for (int i = 0; i < 5; i++){
        scanf("%d", &valor);
        if (valor%2==0) par++;
        if (valor>0) positivo++;
        if (valor<0) negativo++;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, 5-par, positivo, negativo);

    return 0;
}