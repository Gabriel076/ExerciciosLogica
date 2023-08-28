#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int latas,garrafas600Ml,garrafas2l;
    
    printf("Digite a quantidade de latas de 350ml: ");
    scanf("%d",&latas);
    
    printf("Digite a quantidade de garrafas de 600ml: ");
    scanf("%d",&garrafas600Ml);
    
    printf("Digite a quantidade de garrafas de 2Lts: ");
    scanf("%d",&garrafas2l);
    
    printf("A quantidade total de litros e: %g",latas*0.350+garrafas600Ml*0.600+garrafas2l*2);
    return 0;
}