#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int qntFrangos;
    
    printf("Digite a QTDE de frangos: ");
    scanf("%d",&qntFrangos);
    
    float precoFinal = (float)qntFrangos*11.00;
    
    printf("O valor total para identificar os frangos e: R$ %0.2f",precoFinal);

    return 0;
}