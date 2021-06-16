#include <stdio.h>

int main(){

    int x;
    while(scanf("%d", &x) != 0){
        if(x==0) break;

        for(int n=1; n<=x; n++){
            if(n==x) printf("%d\n", n);
            else printf("%d ", n);
        }

    }
    return 0;
}