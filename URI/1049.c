#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[30], palavra2[30], palavra3[30];
    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);


    if(strcmp(palavra1,"vertebrado")==0){
        if(strcmp(palavra2, "ave")==0){
            if(strcmp(palavra3, "carnivoro")==0){
                puts("aguia");
            }
            else{
                puts("pomba");
            }
        }
        else {
            if(strcmp(palavra3, "onivoro")==0){
                puts("homem");
            }
            else{
                puts("vaca");
            }            
        }
    }
    else{
        if(strcmp(palavra2, "inseto")==0){
            if(strcmp(palavra3, "hematofago")==0){
                puts("pulga");
            }
            else{
                puts("lagarta");
            }
        }
        else {
            if(strcmp(palavra3, "hematofago")==0){
                puts("sanguessuga");
            }
            else{
                puts("minhoca");
            }            
        }
    }

    return 0;
}