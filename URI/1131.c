#include <stdio.h>

int main(){

    int golInter, golGremio, grenais=0, inter=0, gremio=0, empate=0, executar=1;

    while(executar==1){
        
        scanf("%d %d", &golInter, &golGremio);

        grenais++;
        if(golInter>golGremio) inter++;
        else if(golGremio>golInter) gremio++;
        else empate++;

        puts("Novo grenal (1-sim 2-nao)");
        scanf("%d", &executar);
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if(inter>gremio) puts("Inter venceu mais");
    else if(gremio>inter) puts("Gremio venceu mais");
    else puts("Nao houve vencedor");

    return 0;
}