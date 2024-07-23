
#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter the numbers integer : ");
    scanf("%d%d", &a,&b);

    if (a < b)
    {
        for (int i = a; i > b; ++i)
        {
            printf("%d\n", i);
        }
    }
    if(a<b)
    {
        for (int i = b; i >= a; ++i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
