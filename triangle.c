#include <stdio.h>
int main(){
    int side1,side2,side3;
    printf("entrer le premier cote");
    scanf("%d",&side1);
    printf("entrer le deuxieme cote");
    scanf("%d",&side2);
    printf("entrer le troisieme cote");
    scanf("%d",&side3);
    if(side1*side1 + side2*side2 == side3*side3 || side2*side2 + side3*side3 == side1*side1 || side1*side1 + side3*side3== side2*side2)
    {
        printf("le triangle est un triangle rectangle.\n");
    }
    else if( side1 == side2 && side2 == side3)
    {
        printf("le triangle est un triangle equilateral.\n");
    }
    else if(side1 == side2 || side1 == side3 || side2== side3)
    {
        printf("le triangle est un triangle isocele.\n");
    }
    else
    {
        printf("le triangle est un triangle scalene.\n");
    }
    return 0;
}