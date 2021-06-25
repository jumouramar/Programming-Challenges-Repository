#include <stdio.h>

int main(){

    int n; scanf("%d", &n);
    int x[n], menor, posi;

    for(int i = 0; i<n; i++){
        scanf("%d", &x[i]);
        if(i == 0){
            menor = x[i];
            posi = i;
        }    
        if(x[i]<menor){
            menor = x[i];
            posi = i;
        }  
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posi);

    return 0;
}