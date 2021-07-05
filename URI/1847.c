#include <stdio.h>

int main(){

    int a, b, c, humor = 0;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(c>=b) humor = 1;
        else{
            if((b-c)<(a-b)) humor = 1;
        }
    }
    else if(a == b){
        if(b<c) humor = 1;
    }
    else{
        if((c-b)>=(b-a)) humor = 1;
    }

    if(humor == 1)printf(":)\n");
    else printf(":(\n");

    return 0;
}