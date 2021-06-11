#include <stdio.h>

int main(){

    int x, y;
    
    scanf("%d %d", &x, &y);
    while(x!=0 && y!=0){
        if(x>0 && y>0) puts("primeiro");
        else if(x>0 && y<0) puts("quarto");
        else if(x<0 && y>0) puts("segundo");
        else puts("terceiro");
        scanf("%d %d", &x, &y);
    }
    
    return 0;
}