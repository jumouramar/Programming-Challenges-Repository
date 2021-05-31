#include <stdio.h>

int main(){

    char nome[100];
    double salario, totalVendas;
    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &totalVendas);

    salario += totalVendas*15/100;
    printf("TOTAL = R$ %.2f\n", salario);

    return 0;
}