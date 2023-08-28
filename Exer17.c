#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main()
{
    int quantPaes,quantBroas;
    float valorRef;
    
    printf("Digite a quantidade de paes: ");
    scanf("%d",&quantPaes);
    printf("Digite a quantidade de Broas: ");
    scanf("%d",&quantBroas);
    printf("Digite o valor da reforma: ");
    scanf("%f",&valorRef);
    
   int dias =  ceil(valorRef/((quantPaes*0.12+quantBroas*1.60)*0.10));
    
    printf("\nFaturamento com a venda de paes R$ %0.2f",quantPaes*0.12);
    printf("\nFaturamento com a venda de broas R$ %0.2f",quantBroas*1.60);
    printf("\nValor arrecadado %0.2f",quantPaes*0.12+quantBroas*1.60);
    printf("\nValor que devera ser guardado: R$ %0.2f",(quantPaes*0.12+quantBroas*1.60)*0.10);
    printf("\nSerao necessarios %d dias para arrecadar o dinheiro para a reforma",dias);
    return 0;
}