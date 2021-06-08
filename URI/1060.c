#include <stdio.h>

int main(){

    double valor;
    int positivo=0;
    for (int i = 0; i < 6; i++){
        scanf("%lf", &valor);
        if (valor > 0) positivo++;
    }
    printf("%d valores positivos\n", positivo);

    return 0;
}