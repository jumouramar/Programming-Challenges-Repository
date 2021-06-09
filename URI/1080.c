#include <stdio.h>

int main(){

    int valor, maiorvalor=0, posi;
    for(int i = 0; i<100; i++){
        scanf("%d", &valor);
        if(valor>maiorvalor){
            maiorvalor = valor;
            posi = i+1;
        }
    }
    printf("%d\n%d\n", maiorvalor, posi);
    
    return 0;
}