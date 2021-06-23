#include <stdio.h>

int main(){

    int n[20], aux;
    for(int i = 0; i<20; i++){
        scanf("%d", &n[i]);
    }
    for(int j = 0; j<10; j++){
        aux = n[j];
        n[j] = n[19-j];
        n[19-j] = aux;
    }
    for(int k = 0; k<20; k++){
        printf("N[%d] = %d\n", k, n[k]);
    }

    return 0;
}