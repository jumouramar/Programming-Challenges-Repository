#include <stdio.h>
#include <string.h>

int main(){

    char entrada[7];
    int count = 3, resposta = 0;
    while(count--){
        while(1){
            scanf("%s", entrada);
            if(strcmp(entrada, "caw") == 0){
                scanf("%s", entrada);
                break;
            }
            if(entrada[0] == '*')
                resposta+=4;
            if(entrada[1] == '*')
                resposta+=2;
            if(entrada[2] == '*')
                resposta+=1;
        }
        printf("%d\n", resposta);
        resposta = 0;
    }

    return 0;
}