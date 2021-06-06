#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int vet[3] = {a, b, c};

    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(vet[i]>vet[j]){
                int aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(int i=0; i<3; i++){
        printf("%d\n", vet[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}