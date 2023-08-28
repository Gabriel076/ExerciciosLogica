#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float faturamentoAnt;
    
    printf("Digite o valor do faturamento Anterior: ");
    scanf("%f",&faturamentoAnt);
    
    printf("\nA meta do proximo mes e: R$ %0.2f",faturamentoAnt+faturamentoAnt*0.20);
    printf("\nUm aumento de R$ %0.2f",faturamentoAnt*0.20);
    printf("\nQuantidade de pecas a serem vendidas para atingimos a meta:\n\n");
    
    printf("Produto 1: %0.2f pecas\n",(faturamentoAnt*0.20)/150);
    printf("Produto 2: %0.2f pecas\n",(faturamentoAnt*0.20)/220);
    printf("Produto 3: %0.2f pecas",(faturamentoAnt*0.20)/97);
    return 0;
}