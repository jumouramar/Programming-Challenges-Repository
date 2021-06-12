#include <stdio.h>

int main(){

    int alcool=0, gasolina=0, diesel=0, codigo=0; 

    while(codigo!=4){
        scanf("%d", &codigo);
        if(codigo==1) alcool++;
        else if(codigo==2) gasolina++;
        else if(codigo==3) diesel++;
    }
    
    puts("MUITO OBRIGADO");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}