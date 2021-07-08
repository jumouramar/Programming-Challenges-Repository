#include <stdio.h>

int main(){

    int p, produto, q;
    float soma = 0;
    scanf("%d", &p);

    for(int i = 0; i<p; i++){
        scanf("%d %d", &produto, &q);
        switch (produto){
        case 1001:
            soma += 1.5*q;
            break;
        case 1002:
            soma += 2.5*q;
            break;
        case 1003:
            soma += 3.5*q;
            break;
        case 1004:
            soma += 4.5*q;
            break;
        case 1005:
            soma += 5.5*q;
            break;
        default:
            break;
        }
    }
    
    printf("%.2f\n", soma);

    return 0;
}