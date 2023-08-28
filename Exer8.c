#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float salario,novoSalario;
   
   printf("Informe o salario: ");
   scanf("%f",&salario);
   
   novoSalario = salario+(salario*0.15);
   printf("Salario inicial: %0.2f\n",salario);
   printf("Salario Reajustado: %0.2f\n",novoSalario);
   printf("Desconto 11%% do INSS: %0.2f\n",novoSalario*0.11);
   printf("Desconto 8%% FGTS: %0.2f\n",novoSalario*0.08);
   printf("Total Descontos INSS+FGTS: %0.2f\n",novoSalario*0.11+novoSalario*0.08);
   printf("Salario Final %0.2f",novoSalario-(novoSalario*0.11+novoSalario*0.08));
    return 0;
    
}