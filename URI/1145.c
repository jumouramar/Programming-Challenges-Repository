#include <stdio.h>

int main(){

    int x, y, i, j, aux=1;
    scanf("%d %d", &x, &y);

    for(i=aux; i<=y/x; i++){
        for(int j=0; j<x; j++){
            if(j==x-1) printf("%d\n", aux);
            else printf("%d ", aux);
            aux++;
        }
    }

    return 0;
}