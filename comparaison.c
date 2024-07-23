#include <stdio.h>
int main(){
    int num1,num2;
    //demander les nombres a l'utilisateur
    printf("enter the first number \n");
    scanf("%d",&num1);
     printf("enter the second  number \n");
    scanf("%d",&num2);
    //compa
    if(num1>num2)
    {
        printf("%d is greater than %d\n", num1,num2);
    }
    else if(num2>num1)
    {
        printf("%d is greater than %d\n",num2,num1);
    }
    else
    {
        printf("Both numbers are the same\n");
    }
    return 0;
}