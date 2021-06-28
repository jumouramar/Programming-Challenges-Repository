#include <stdio.h>

int main(){

    char O[2];
    double M[12][12], soma = 0.0;

    scanf("%s", &O);

    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%lf", &M[i][j]);
            if(j < i)
                soma += M[i][j];      
        }
    }

    if(O[0] == 'S')
        printf("%.1lf\n", soma);
    else if(O[0] == 'M')
        printf("%.1lf\n", soma/66.0);

    return 0;
}