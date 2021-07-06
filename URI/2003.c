#include <stdio.h>

int main(){

    int h, m, atraso;
    while(scanf("%d:%d", &h, &m) != EOF){
        atraso = 0;
        if(h==7) atraso = m;
        else if(h > 7) atraso = m+(h-7)*60;
        printf("Atraso maximo: %d\n", atraso);
    }

    return 0;
}