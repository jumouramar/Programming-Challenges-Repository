#include <stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    if(b>a){
        int aux = a;
        a = b;
        b = aux;
    }
    
    if(a%b==0){
        puts("Sao Multiplos");
    }
    else{
        puts("Nao sao Multiplos");
    }

    return 0;
}