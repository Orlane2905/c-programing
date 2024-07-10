#include <stdio.h>
int main(){
    double num1, num2, difference;
    printf("Enter the first  number:");
    scanf("%lf", &num1);
    printf("Enter the second number:");
    scanf("%lf", &num2);
    difference= num1 - num2;
    printf("difference:%.2lf \n",difference);
    return 0;
}
