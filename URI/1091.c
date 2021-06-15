#include <stdio.h>

int main(){

    int k, n, m, x, y;
    
    while(scanf("%d", &k) != 0){
        if(k==0) break;

        scanf("%d %d", &n, &m);

        for(int i = 0; i < k; i++){
            scanf("%d %d", &x, &y);
            if(x>n && y>m) puts("NE");
            else if(x>n && y<m) puts("SE");
            else if(x<n && y>m) puts("NO");
            else if(x<n && y<m) puts("SO");
            else puts("divisa");
        }
    }
        
    return 0;
}