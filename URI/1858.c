#include <stdio.h>

int main(){

    int n, t, menor=20, posi;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        scanf("%d", &t);
        if(t<menor){
            posi = i;
            menor = t;
        } 
    }
    printf("%d\n", posi);

    return 0;
}