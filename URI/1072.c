#include <stdio.h>

int main(){

    int n, x, intervalo=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &x);
        if(x>=10 && x<=20) intervalo++;
    }
    printf("%d in\n%d out\n", intervalo, n-intervalo);

    return 0;
}