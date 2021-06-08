#include <stdio.h>

int main(){

    int x, y, soma=0;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x<y){
        int aux = y;
        y = x;
        x = aux;
    }

    for(int i = y+1; i<x; i++){
        if(i%2!=0) soma += i;
    }
    printf("%d\n", soma);

    return 0;
}