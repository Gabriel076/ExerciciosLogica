#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float valorSalarioMin, valorSalarioFunc;
    
    printf("Informe o valor do salario minimo: ");
    scanf("%f",&valorSalarioMin);
    
    printf("Informe o valor do salario do Funcionario: ");
    scanf("%f",&valorSalarioFunc);
    
    printf("\n");
    
    printf("O funcionario recebe %0.1f salarios minimos!",valorSalarioFunc/valorSalarioMin);
    return 0;
}