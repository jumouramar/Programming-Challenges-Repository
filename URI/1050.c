#include <stdio.h>

int main(){

    int ddd;
    scanf("%d", &ddd);

    switch (ddd){
    case 11:
        puts("Sao Paulo");
        break;
    case 19:
        puts("Campinas");
        break;
    case 21:
        puts("Rio de Janeiro");
        break;
    case 27:
        puts("Vitoria");
        break;
    case 31:
        puts("Belo Horizonte");
        break;
    case 32:
        puts("Juiz de Fora");
        break;
    case 61:
        puts("Brasilia");
        break;
    case 71:
        puts("Salvador");
        break;                            
    default:
        puts("DDD nao cadastrado");
        break;
    }

    return 0;
}