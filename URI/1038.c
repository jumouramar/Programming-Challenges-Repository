#include <stdio.h>

int main(){

    int codigo, qtd;
    double valor;
    scanf("%d %d", &codigo, &qtd);

    switch (codigo) {
        case 1:
            valor = 4.00;
            break;
        case 2 :
            valor = 4.50;
            break;
        case 3 :
            valor = 5.00;
            break;
        case 4 :
            valor = 2.00;
            break;
        case 5 :
            valor = 1.50;
            break; 
        default:
            break;
    }

    valor *= qtd;
    printf("Total: R$ %.2lf\n", valor);

    return 0;
}