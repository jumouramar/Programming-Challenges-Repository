#include <stdio.h>

int main(){

    int aux = 5;
    for (int i = 1; i <= 9; i += 2){
        for (int j = aux+2; j >= aux; j--){
            printf("I=%d J=%d\n", i, j);
        }
        aux += 2;
    }

    return 0;
}