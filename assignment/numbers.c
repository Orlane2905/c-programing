#include <stdio.h>
int main(){
    int n;
    printf("entrer les nombre entier n : ");
    scanf("%d", &n);
    if (n>=1)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        for (int i=1;i>=n;i--)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}