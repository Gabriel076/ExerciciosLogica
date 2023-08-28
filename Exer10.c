#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int anoInicial,anoFinal, anos,meses, dias,semanas;
    
    printf("Digite o ano Incial: ");
    scanf("%d",&anoInicial);
    
    printf("Digite o ano Final: ");
    scanf("%d",&anoFinal);
    
    anos = anoFinal-anoInicial;
    meses = anos*12;
    semanas = meses*4;
    dias = meses*30;
    
    printf("A idade desta pessoa em\n");
    printf("anos: %d\n",anos);
    printf("meses %d\n",meses);
    printf("Dias %d\n",dias);
    printf("semanas %d",semanas);
    return 0;
}