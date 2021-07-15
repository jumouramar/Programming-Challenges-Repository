#include <stdio.h>

int main(){

    int t, n;
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d", &n);
        long long int a = 0, b = 1, c;
        if(n<2) c = n;
        else{
            for(int i = 2; i<=n; i++){
                c = a+b;
                a = b;
                b = c;
            }
        }
        printf("Fib(%d) = %lld\n", n, c);
    }

    return 0;
}