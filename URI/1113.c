#include <stdio.h>

int main(){

    int x, y;
    scanf("%d %d", &x, &y);
    
    while(x!=y){
        if(x>y) puts("Decrescente");
        else puts("Crescente");
        scanf("%d %d", &x, &y);
    }

    return 0;
}