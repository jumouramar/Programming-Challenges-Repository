#include <stdio.h>

int main(){
    
    for(float i = 0.0; i < 2.2; i += 0.2){
        for(float j = 1.0; j <= 3.0; j++){
            if(i == 0 || i == 1 || i >= 2.0){
                int a = j+i;
                int b = i;
                printf("I=%d J=%d\n", b, a);
            }  
            else
                printf("I=%.1f J=%.1f\n", i, j+i);
        }
    }

    return 0;
}