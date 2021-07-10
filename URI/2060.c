#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int vet[n];
    int mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &vet[i]);
        if(vet[i]%2 == 0) mult2++;
        if(vet[i]%3 == 0) mult3++;
        if(vet[i]%4 == 0) mult4++;
        if(vet[i]%5 == 0) mult5++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", mult2, mult3, mult4, mult5);

    return 0;
}