#include <stdio.h>
#include <math.h>
int main(){
    double P,V,T,n;
    const double R=8.31;
    printf("entrer les parametres");
    scanf("%lf%lf%lf", &P,&V,&T);
    n=(P*V)/(R*T);
    printf("%lf\n",n);
    return 0;
}