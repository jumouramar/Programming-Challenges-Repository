#include <stdio.h>

// Função que verifica o num de dígitos de um num
int digitos(int maior){
    int dig = 0;
    while(maior>0){
        maior /= 10;
        dig++;
    }
    return dig;
}

int main(){

    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;   

        int M[n][n], base = 1, maior = 0;
        // Inicializa a matriz
        // Temos um número "base" que é multiplicado por dois a cada for
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(j == 0) M[i][j] = base;
                else M[i][j] = (M[i][j-1])*2;
            }
            base *= 2;
        }
        // Imprime a matriz
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                // Compara o num de dígitos atuais com o num de dígitos do maior num
                // Imprime espaço em branco para cada dígito menor que o maior num
                for(int k = digitos(M[i][j]); k<digitos(M[n-1][n-1]); k++) printf(" ");
                if(j == n-1) printf("%d", M[i][j]);
                else printf("%d ", M[i][j]);
            }            
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}