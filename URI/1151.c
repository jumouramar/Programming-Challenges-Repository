#include <stdio.h>

int main(){

    int n, cont = 0;
    int fib = 0, fib2 = 1;
    scanf("%d", &n);

    while (cont < n){
        if(cont == n-1) printf("%d\n", fib);
        else printf("%d ", fib);
        cont++;
        if(cont<n){
            if(cont == n-1) printf("%d\n", fib2);
            else printf("%d ", fib2);
            cont++;
        }
        fib += fib2;
        fib2 += fib;
    }

    return 0;
}