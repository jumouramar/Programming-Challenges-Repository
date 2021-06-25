#include <stdio.h>

int main(){

    int valor = 0, par[5], impar[5];
    int auxPar = 0, auxImpar = 0;

    for(int i = 0; i<15; i++){
        scanf("%d", &valor);

        if(valor%2==0){
            par[auxPar] = valor;
            auxPar++;
            if(auxPar == 5){
                for(int j = 0; j<5; j++){
                   printf("par[%d] = %d\n", j, par[j]); 
                   par[j] = 0;
                }
                auxPar = 0;
            }
        }
        else{
            impar[auxImpar] = valor;
            auxImpar++;
            if(auxImpar == 5){
                for(int k = 0; k<5; k++){
                    printf("impar[%d] = %d\n", k, impar[k]);
                    impar[k] = 0;
                }
                auxImpar = 0;
            }
        }
    }

    for(int l = 0; l<auxImpar; l++)
        printf("impar[%d] = %d\n", l, impar[l]);
    for(int m = 0; m<auxPar; m++)
        printf("par[%d] = %d\n", m, par[m]);

    return 0;
}