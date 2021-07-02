#include <stdio.h>

int main(){

    int l, v, maiorV;
    while(scanf("%d", &l) != EOF){
        maiorV = 0;
        for(int i = 0; i<l; i++){
            scanf("%d", &v);
            if(v>maiorV)
                maiorV = v;
        }
        if(maiorV<10) printf("1\n");
        else if(maiorV<20) printf("2\n");
        else printf("3\n");
    }

    return 0;
}