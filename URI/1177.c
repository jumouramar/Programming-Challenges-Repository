#include <stdio.h>

int main(){

    int t, n[1000], j=0;
    scanf("%d", &t);
    for(int i = 0; i<1000; i++){
        n[i] = j;
        j++;
        if(j==t) j=0;
    }
    for(int k = 0; k<1000; k++){
        printf("N[%d] = %d\n", k, n[k]);
    }

    return 0;
}