#include <stdio.h>

int main(){

    double n1, n2, n3, n4, media, exame;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1*2+n2*3+n3*4+n4*1)/10;
    printf("Media: %.1lf\n", media);

    if(media>=7){
        puts("Aluno aprovado.");
    }
    else if(media<5){
        puts("Aluno reprovado.");
    }
    else{
        puts("Aluno em exame.");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);

        media += exame;
        media /= 2;
        
        if(media>=5){
            puts("Aluno aprovado.");
        } 
        else {
            puts("Aluno reprovado.");
        } 
        printf("Media final: %.1lf\n", media);
    }

    return 0;
}