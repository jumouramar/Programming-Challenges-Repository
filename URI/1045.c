#include <stdio.h>

int main(){

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double vet[3] = {a, b, c};

    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(vet[i]<vet[j]){
                int aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    if(vet[0]>=vet[1]+vet[2]){
        puts("NAO FORMA TRIANGULO");
    }
    else if(vet[0]*vet[0] == vet[1]*vet[1]+vet[2]*vet[2]){
        puts("TRIANGULO RETANGULO");
    }
    else if(vet[0]*vet[0] > vet[1]*vet[1]+vet[2]*vet[2]){
        puts("TRIANGULO OBTUSANGULO");
    }
    else if(vet[0]*vet[0] < vet[1]*vet[1]+vet[2]*vet[2]){
        puts("TRIANGULO ACUTANGULO");
    }

    if(vet[0] == vet[1] && vet[0] == vet[2]){
        puts("TRIANGULO EQUILATERO");
    }
    else if(vet[0] == vet[1] || vet[0] == vet[2] || vet[1] == vet[2]){
        puts("TRIANGULO ISOSCELES");
    }

    return 0;
}