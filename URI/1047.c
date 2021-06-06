#include <stdio.h>

int main(){

    int hInicial, mInicial, hFinal, mFinal;
    int hora, minuto;
    scanf("%d %d %d %d", &hInicial, &mInicial, &hFinal, &mFinal);

    if (mFinal >= mInicial){
        minuto = mFinal - mInicial;
        if(hInicial<hFinal){
            hora = hFinal - hInicial;
        }
        else if(hInicial==hFinal && mInicial<mFinal){
            hora = hFinal - hInicial;
        }
        else{
            hora = 24 - hInicial + hFinal;
        }
    }
    else{
        minuto = 60 - mInicial + mFinal;
        if(hInicial<hFinal){
            hora = hFinal-hInicial-1;
        }
        else {
            hora = 23 - hInicial + hFinal;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

    return 0;
}