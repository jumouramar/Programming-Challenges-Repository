#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) != 0){
        if(n==0) break;

        int numero = 1, inicio = 0, fim = n;
        int M[n][n];

        while(fim != 0){
            for(int i = inicio; i<fim; i++){
                for(int j = inicio; j<fim; j++)
                    M[i][j] = numero;    
            }
            numero++;
            inicio++;
            fim--;    
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(j == 0) printf("%3d", M[i][j]);
                else printf(" %3d", M[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}