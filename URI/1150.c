#include <stdio.h>

int main(){

    int x, z, cont=1;
    scanf("%d %d", &x, &z);
    while(z<=x){
        scanf("%d", &z);
    }

    int soma = x;
    while(z>=soma){
        soma += x+cont;
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}