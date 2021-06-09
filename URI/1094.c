#include <stdio.h>

int main(){

    int n, quantia;
    char tipo;
    int total=0, coelhos=0, ratos=0, sapos=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %c", &quantia, &tipo);
        if(tipo == 'C') coelhos+=quantia;
        else if(tipo == 'R') ratos+=quantia;
        else sapos+=quantia;
        total+=quantia;
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %\n", coelhos*100.00/total);
    printf("Percentual de ratos: %.2lf %\n", ratos*100.00/total);
    printf("Percentual de sapos: %.2lf %\n", sapos*100.00/total);

    return 0;
}