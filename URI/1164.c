#include <stdio.h>

int main(){

    int n, x, soma;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        soma = 0;
        for(int j = 1; j < x; j++){
            if(x%j == 0){
                soma += j;
            }
        }
        if (soma == x) printf("%d eh perfeito\n", x);
        else printf("%d nao eh perfeito\n", x);
    }
    
    return 0;
}