#include <stdio.h>

int main(){

    int executar = 1;
    while(executar!=2){

        double nota1, nota2;
        scanf("%lf", &nota1);

        while(nota1 < 0 || nota1 > 10.0){
            puts("nota invalida");
            scanf("%lf", &nota1);
        }
        scanf("%lf", &nota2);
        while(nota2 < 0 || nota2 > 10.0){
            puts("nota invalida");
            scanf("%lf", &nota2);
        }

        printf("media = %.2lf\n", (nota1+nota2)/2);
        puts("novo calculo (1-sim 2-nao)");
        scanf("%d", &executar);

        while(executar != 1 && executar != 2){
            puts("novo calculo (1-sim 2-nao)");
            scanf("%d", &executar);
        }
    }

    return 0;
}