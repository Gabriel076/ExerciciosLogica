#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main()
{
    float valorConta,valorContaFelipe,valorCent;
    
    printf("Informe o valor da conta: ");
    scanf("%f",&valorConta);
    valorCent = valorConta-((int)valorConta/3)*3;
    valorContaFelipe = valorCent+(int)valorConta/3;
    
    printf("\nCarlos pagara: R$ %d",(int)valorConta/3);
    printf("\nAndre pagara: R$ %d",(int)valorConta/3);
    printf("\nFelipe pagara: R$ %0.2f",valorContaFelipe);
    return 0;
}