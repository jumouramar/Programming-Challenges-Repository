#include <stdio.h>
#include <string.h>

int main(){

    int T, ganhou;
    char sheldon[8], raj[8];
    scanf("%d", &T);
    for(int i = 1; i<=T; i++){
        scanf("%s %s", sheldon, raj);
        ganhou = 0;

        if(strcmp(sheldon, raj) == 0) ganhou = 2;
        else if(strcmp(raj, "pedra") == 0){
            if(strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "Spock") == 0)
                ganhou = 1;
        }
        else if(strcmp(raj, "papel") == 0){
            if(strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "lagarto") == 0) 
                ganhou = 1;
        }
        else if(strcmp(raj, "tesoura") == 0){
            if(strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "Spock") == 0) 
                ganhou = 1;
        }
        else if(strcmp(raj, "lagarto") == 0){
            if(strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "tesoura") == 0) 
                ganhou = 1;
        }
        else if(strcmp(raj, "Spock") == 0){
            if(strcmp(sheldon, "papel") == 0 || strcmp(sheldon, "lagarto") == 0) 
                ganhou = 1;
        }

        if(ganhou == 1) printf("Caso #%d: Bazinga!\n", i);
        else if(ganhou == 2) printf("Caso #%d: De novo!\n", i);
        else printf("Caso #%d: Raj trapaceou!\n", i);    
    }

    return 0;
}