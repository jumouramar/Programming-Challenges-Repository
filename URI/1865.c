#include <stdio.h>
#include <string.h>

int main(){

    int c, newtons;
    char nome[50];
    scanf("%d", &c);
    for(int i = 0; i<c; i++){
        scanf("%s" "%d", nome, &newtons);
        if(strcmp(nome, "Thor") == 0) printf("Y\n");
        else printf("N\n");
    }

    return 0;
}