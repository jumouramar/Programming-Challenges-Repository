#include <stdio.h>
#include <string.h>

int main(){

    int n, m; 
    char acao[6];
    scanf("%d %d", &n, &m);
    for(int i = 0; i<m; i++){
        scanf("%s", acao);
        if(strcmp(acao, "fechou") == 0) n++;
        else n--;
    }
    printf("%d\n", n);

    return 0;
}