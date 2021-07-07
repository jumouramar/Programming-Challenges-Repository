#include <stdio.h>

int main(){

    int s, t, f, hora;
    scanf("%d %d %d", &s, &t, &f);
    hora = s+t+f;
    if(hora>24)
        hora -= 24;
    if(hora<0)
        hora += 24;
    printf("%d\n", hora);

    return 0;
}