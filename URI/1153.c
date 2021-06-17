#include <stdio.h>

int main(){

    int n, fatorial=1;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        fatorial *= n-i;
    }

    printf("%d\n", fatorial);

    return 0;
}