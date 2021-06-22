#include <stdio.h>

int main(){

    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int pa, pb, anos = 0; 
        float g1, g2;
        scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
        while(pa<=pb){
            anos++;
            pa += (pa*g1)/100;
            pb += (pb*g2)/100; 
            if(anos>100){
              printf("Mais de 1 seculo.\n");
              break;
            } 
        }
        if(anos<=100) printf("%d anos.\n", anos);
    }

    return 0;
}