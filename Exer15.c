#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float horasNormais,extras;
    int dependente;
    
    printf("Digite a quantidade total de horas normais: ");
    scanf("%f",&horasNormais);
    
    printf("Digite a quantidade total de horas extras: ");
    scanf("%f",&extras);
    
    printf("Informe a quantidade de dependentes: ");
    scanf("%d",&dependente);
    
    printf("\nHoras normais: %0.2f\n",horasNormais*10);
    printf("Adicional de horas extras R$%0.2f\n",extras*15);
    printf("Adicional de dependentes: R$%0.2f\n",dependente*90.0);
    printf("Salario Liquido: R$%0.2f\n",(horasNormais*10)-(horasNormais*10)*0.11);
    printf("Salario Final: R$%0.2f",((horasNormais*10)-(horasNormais*10)*0.11)+extras*15+dependente*90);
   
    return 0;
}