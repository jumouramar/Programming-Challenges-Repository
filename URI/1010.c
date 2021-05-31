#include <stdio.h>

int main(){

    int peca1, numPeca1, peca2, numPeca2;
    double valPeca1, valPeca2; 
    scanf("%d %d %lf", &peca1, &numPeca1, &valPeca1);
    scanf("%d %d %lf", &peca2, &numPeca2, &valPeca2);

    valPeca1 *= numPeca1;
    valPeca2 *= numPeca2;
    printf("VALOR A PAGAR: R$ %.2lf\n", valPeca1+valPeca2);

    return 0;
}