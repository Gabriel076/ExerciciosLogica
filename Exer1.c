#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float frente, lateral,valorMq,areaTerreno,valorVenda;
    
    printf("Quantos metros o terreno possui de frente: ");
    scanf("%f",&frente);
    
    printf("Quantos metros o terreno possui de lateral: ");
    scanf("%f",&lateral);
    
    printf("Informe o valor do metro quadrado: ");
    scanf("%f",&valorMq);
    
    areaTerreno = frente*lateral;
    valorVenda = valorMq*areaTerreno;
    
    printf("Area total do terreno de %0.2f mts de frente com %0.2f mts delateral e: %0.2f mts de area\n",frente,lateral,areaTerreno);
    printf("O valor do terreno sera: %0.2f",valorVenda);
    return 0;
}