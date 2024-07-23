#include <stdio.h>
#include <math.h>
int main(){
    double P,V,T,n;
    const double R=8.31;
    //definir les parametres
    printf("entrer les parametres");
    //afficher les paraametres
    scanf("%lf%lf%lf", &P,&V,&T);
    n=(P*V)/(R*T);
    //afficher le resultat
    printf("%2.lf\n",n);
    return 0;
}