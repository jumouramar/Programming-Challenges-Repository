#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) != 0){
        if(n==0) break;

        int M[n][n], numero = 1;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i==j) M[i][j] = numero;
                else if(i>j) M[i][j] = numero + i - j;
                else if(i<j) M[i][j] = numero + j - i;
            }
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