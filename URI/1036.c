#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;
    double r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);

    r1 = b*b-4*a*c;
    r2 = b*b-4*a*c;

    if(a<=0 || b<=0 || c<=0 || r1<0 || r2<0){
      puts("Impossivel calcular");
    }
    else {
      printf("R1 = %.5lf\n", (-b+sqrt(r1))/(2*a));
      printf("R2 = %.5lf\n", (-b-sqrt(r2))/(2*a));
    }

    return 0;
}