#include <stdio.h>
int main(){
    int n1,n2;
    printf("entrer les nombres entiers \n");
    scanf("%d%d", &n1,&n2);
    if (n1<n2){
        for(int i=n1;i<=n2;i++){
            printf("%d\n",i);
        }
    }
    if(n1>n2){
        for (int i=n2;i<=n1;i++){
            printf("%d\n",i);
        }
    }
    return 0;
}