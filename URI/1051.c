#include <stdio.h>

int main(){

    double salario, imposto=0;
    scanf("%lf", &salario);

    if(salario>0 && salario<=2000){
        puts("Isento");
    }
    else{
        if(salario>4500){
            imposto += (salario-4500)*28/100;
            salario = 4500;
        }
        if(salario>3000){
            imposto += (salario-3000)*18/100;
            salario = 3000;
        }
        if(salario>2000){
            imposto += (salario-2000)*8/100;
        } 
        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}