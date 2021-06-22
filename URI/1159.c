#include <stdio.h>

int main(){

    int x, soma;
    while(scanf("%d", &x) != 0){
        if(x == 0) break;
        soma = 0;
        for(int i = x; i <= x+9; i++){
            if(i%2 == 0) soma += i;
        }
        printf("%d\n", soma);
    }

    return 0;
}