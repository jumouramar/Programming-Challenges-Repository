#include <stdio.h>

int main(){

    int C;
    char T[2];
    double M[12][12], soma = 0.0;

    scanf("%d", &C);
    scanf("%s", &T);

    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%lf", &M[i][j]);
            if(j == C)
                soma += M[i][j];
        }
    }

    if(T[0] == 'S')
        printf("%.1lf\n", soma);
    else if(T[0] == 'M')
        printf("%.1lf\n", soma/12.0);

    return 0;
}