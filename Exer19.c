#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main()
{
    int dia,mes,total;
    
    printf("Digite o dia: ");
    scanf("%d",&dia);
    
    printf("Digite o mes: ");
    scanf("%d",&mes);
    
    total = mes*30+dia;
    
    printf("A quantidade de dias que se passaram foi: %d dias",total);
    return 0;
}