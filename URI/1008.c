#include <stdio.h>

int main(){

    int numero, qtdHoras;
    float valorHora, salario;
    scanf("%d", &numero);
    scanf("%d", &qtdHoras);
    scanf("%f", &valorHora);

    salario = qtdHoras*valorHora;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}