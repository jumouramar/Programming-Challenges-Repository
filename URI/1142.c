#include <stdio.h>

int main(){

    int n, j=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("%d %d %d PUM\n", j+1, j+2, j+3);
        j+=4;
    }
    
    return 0;
}