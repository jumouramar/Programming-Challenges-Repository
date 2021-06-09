#include <stdio.h>

int main(){

    int n, x, y, aux;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int soma = 0;

        scanf("%d %d", &x, &y);

        if(x>y){
            aux = y;
            y = x;
            x = aux; 
        }

        for(int j = x+1; j<y; j++){
            if(j%2!=0) soma+=j;
        }
        
        printf("%d\n", soma);
    }

    return 0;
}