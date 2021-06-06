#include <stdio.h>

int main(){

    int a, b, horas;
    scanf("%d %d", &a, &b);

    horas = 24-a+b;
    if(horas>24){
        horas-=24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", horas);

    return 0;
}