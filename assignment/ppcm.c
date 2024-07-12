#include <stdio.h>
int main(){
    int a,b,ppcm;
    printf("entrer deux nombres entiers");
    scanf("%d%d",&a,&b);
    ppcm=(a > b)? a : b ;
    while(1){
        if(ppcm % a==0 && ppcm % b==0){
            break;
        }
        ppcm++;
    }
    printf("le ppcm de %d et %d est %d \n",a,b,ppcm);
    return 0;
}
