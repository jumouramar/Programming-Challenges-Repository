#include <stdio.h>

int main(){

    int abcd[4], entrou = 0, k, j;
    scanf("%d %d %d %d", &abcd[0], &abcd[1], &abcd[2], &abcd[3]);

    for(int i = 0; i < 4; i++){
        if(i == 3) j = 0;
        else       j = i+1;
        if(i >= 2) k = i-2;
        else       k = i+2; 
        if (abcd[i] + abcd[j] > abcd[k] && abcd[k] + abcd[j] > abcd[i] && abcd[k] + abcd[i] > abcd[j]) entrou = 1;
    }
                 
    if(entrou == 1) printf("S\n");
    else printf("N\n");

    return 0;
}