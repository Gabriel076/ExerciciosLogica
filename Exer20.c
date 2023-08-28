#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    
    printf("Digite um numero de 4 digitos: ");
    scanf("%d",&num);
    
    printf("\nMilhares: %d",(num/1000)%10);
    printf("\nCentenas: %d",(num/100)%10);
    printf("\nDezenas: %d",(num/10)%10);
   printf("\nUnidades: %d",(num/1)%10);
    
    return 0;
}