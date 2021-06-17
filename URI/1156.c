#include <stdio.h>

int main(){

    float s = 0;
    int j = 1;
    for (float i = 1.0; i <= 39; i += 2){
        s += i/j;
        j *= 2;
    }
    printf("%.2f\n", s);

    return 0;
}