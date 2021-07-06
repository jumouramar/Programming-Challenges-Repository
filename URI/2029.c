#include <stdio.h>
#include <math.h>

int main(){

    double v, d, altura = 0, area = 0;
    while(scanf("%lf %lf", &v, &d) != EOF){
        altura = v/(3.14*(pow((d/2.0), 2)));
        printf("ALTURA = %.2lf\n", altura);
        area = 3.14*(pow((d/2.0), 2));
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}