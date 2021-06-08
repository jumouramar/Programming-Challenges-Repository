#include <stdio.h>

int main(){

    int dia, hora, minuto, segundo;
    int dia2, hora2, minuto2, segundo2;

    scanf("Dia %d", &dia);
    scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d\n", &hora2, &minuto2, &segundo2);

    segundo = segundo2 - segundo;
    minuto = minuto2 - minuto;
    hora = hora2 - hora;
    dia = dia2 - dia; 
    if(segundo<0){
        minuto--; 
        segundo+=60;
    }    
    if(minuto<0){
        hora--;
        minuto+=60;
    }
    if(hora<0){
        dia--;
        hora+=24;
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minuto, segundo);
    
    return 0;
}