#include <stdio.h>

int main(){
    int x[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &x[i]);
    }
    for(int j = 0; j < 10; j++){
        if(x[j]<=0) x[j] = 1;
        printf("X[%d] = %d\n", j, x[j]);
    }

    return 0;
}