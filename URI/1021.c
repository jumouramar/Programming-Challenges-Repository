#include <stdio.h>

int main(){

    double valor;
    int cem, cinquenta, vinte, dez, cinco, dois;
    int mum, mcinquenta, mvinte, mdez, mcinco, mzeroum;
    scanf("%lf", &valor);

    cem = valor / 100;
    valor -= cem * 100;
    cinquenta = valor / 50;
    valor -= cinquenta * 50;
    vinte = valor / 20;
    valor -= vinte * 20;
    dez = valor / 10;
    valor -= dez * 10;
    cinco = valor / 5;
    valor -= cinco * 5;
    dois = valor / 2;
    valor -= dois * 2;
    mum = valor;
    valor -= mum;
    mcinquenta = valor / 0.5;
    valor -= mcinquenta * 0.5;
    mvinte = valor / 0.25;
    valor -= mvinte * 0.25;
    mdez = valor / 0.1;
    valor -= mdez * 0.1;
    mcinco = valor / 0.05;
    valor -= mcinco * 0.05;
    mzeroum = valor/0.01;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", cem, cinquenta, vinte, dez, cinco, dois);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", mum, mcinquenta, mvinte, mdez, mcinco, mzeroum);

    return 0;
}