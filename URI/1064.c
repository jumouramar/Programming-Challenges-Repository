#include <stdio.h>

int main(){

    double valor, media;
    int positivo=0;

    for (int i = 0; i < 6; i++){
        scanf("%lf", &valor);
        if (valor > 0){
           positivo++;
            media += valor;
        } 
    }

    printf("%d valores positivos\n", positivo);
    printf("%.1lf\n", media/positivo);

    return 0;
}