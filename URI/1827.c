#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int M[n][n];

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                M[i][j] = 0;
                if(i == j) M[i][j] = 2;
                if(n-i == j+1) M[i][j] = 3;
                if(i >= n/3 && i <= n-1-(n/3)){
                    if(j >= n/3 && j <= n-1-(n/3))
                        M[i][j] = 1;
                }  
                if(i == (n-1)/2 && j == (n-1)/2) M[i][j] = 4;        
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                printf("%d", M[i][j]);           
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}