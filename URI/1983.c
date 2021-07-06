#include <stdio.h>

int main(){

    int n, m, maiorMatri; 
    float nota, maiorNota = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d %f", &m, &nota);
        if(nota>maiorNota){
            maiorNota = nota;
            maiorMatri = m;
        }
    }
    if(maiorNota<8) printf("Minimum note not reached\n");
    else printf("%d\n", maiorMatri);

    return 0;
}