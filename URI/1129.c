#include <stdio.h>

int main(){

    int n, a, b, c, d, e;
    
    while(scanf("%d", &n) != 0){
        if(n==0) break;

        for(int i = 0; i < n; i++){
            char resposta;
            int desconsiderar=0;        
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);    
            if(a<=127){
                resposta='A';
                desconsiderar+=1;
            }
            if(b<=127){
                resposta='B';
                desconsiderar+=1;
            }
            if(c<=127){
                resposta='C';
                desconsiderar+=1;
            }
            if(d<=127){
                resposta='D';
                desconsiderar+=1;
            }
            if(e<=127){
                resposta='E';
                desconsiderar+=1;
            }
            
            if(desconsiderar==1) printf("%c\n", resposta);
            else printf("*\n");

        }
    }
        
    return 0;
}