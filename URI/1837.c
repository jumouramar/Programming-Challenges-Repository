#include <stdio.h>

int main(){

    int a, b, q, r;
    scanf("%d %d", &a, &b);

    if(a<0){
        if(b<0){
           b *= -1;
            for(int i = 0; i<b; i++){
                q = (a-i)/b;
                r = a-b*q;
                if(i == r) {
                    q = -q;
                    break;
                }
            } 
        }
        else{
            for(int i = 0; i<b; i++){
            q = (a-i)/b;
            r = a-b*q;
            if(i == r) break;
            }
        }
    }
    else{
        q = a/b;
        r = a%b;
    }

    printf("%d %d\n", q, r); 
    
    return 0;
}