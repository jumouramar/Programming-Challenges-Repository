#include <stdio.h>

int main(){

    int n;
    char vet[34] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        printf("%c", vet[i]);
    }
    printf("\n");

    return 0;
}