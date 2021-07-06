#include <stdio.h>

int main(){

    int t, a, b, c, d, e, correta = 0;
    scanf("%d", &t);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(t == a) correta++;
    if(t == b) correta++;
    if(t == c) correta++;
    if(t == d) correta++;
    if(t == e) correta++;
    printf("%d\n", correta);
    
    return 0;
}