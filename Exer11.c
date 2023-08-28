#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float suco;
    
    printf("Digite a QTDE de lts de suco necessaria: ");
    scanf("%f",&suco);
    
    printf("Sera necessario para fazer %0.0f lts de suco de maracuja: \n",suco);
    printf("%0.2f lts de agua\n",suco*0.8);
    printf("%0.2f lts de suco concentrado de maracuja",suco*0.2);
    return 0;
}