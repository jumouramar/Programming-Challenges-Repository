#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) != EOF){

        int M[n][n], numero = 1;

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(i+j == n-1 || j+i == n-1) M[i][j] = 2;
                else if(i==j) M[i][j] = 1;
                else M[i][j] = 3;
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++)
                printf("%d", M[i][j]);         
            printf("\n");
        }
    }

    return 0;
}