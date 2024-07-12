#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    double discriminant,racine1,racine2;
    printf("entrer les coefficients");
    scanf("%lf%lf%lf",&a ,&b,&c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        racine1 = (-b + sqrt(discriminant)) / (2 * a);
        racine2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Racine 1 = %.2lf\n", racine1);
        printf("Racine 2 = %.2lf\n", racine2);
    }
    else if (discriminant == 0) {
        racine1 = -b / (2 * a);
        printf("Racine 1 = Racine 2 = %.2lf\n", racine1);
    }
    return 0;
}
