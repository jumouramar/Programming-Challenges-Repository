#include <stdio.h>

int main(){

    int m, n, aux;
    scanf("%d %d", &m, &n);
    
    while(m > 0 && n > 0){
        int soma=0;
        
        if(n > m){
            aux = m;
            m = n;
            n = aux;
        }

        for(int i=n; i <= m; i++){
            printf("%d ", i);
            soma+=i;
        }
        printf("Sum=%d\n", soma);

        scanf("%d %d", &m, &n);
    }

    return 0;
}