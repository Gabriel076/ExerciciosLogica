#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int quantCavalos;
    int quantCavalos;
    float valorFerradura;
    
    printf("Informe a quantidade de cavalos: ");
    scanf("%d",&quantCavalos);
    
    printf("informe o valor de cada ferradura R$: ");
    scanf("%f",&valorFerradura);
    
    printf("Quantidade de Ferraduras necessarias: %d\n",quantCavalos*4);
    printf("Valor total para a compra das ferraduras: R$ %0.2f",(quantCavalos*4)*valorFerradura);
    return 0;
    
}