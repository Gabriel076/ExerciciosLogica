#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float num1, num2,num3, mediaPd;
    
    printf("Informe a nota 1: ");
    scanf("%f",&num1);
    
    printf("Informe a nota 2: ");
    scanf("%f",&num2);
    
    printf("Informe a nota 3: ");
    scanf("%f",&num3);
    
    
    mediaPd = (num1*1+num2*2+num3*3)/6;
    
    printf("A media ponderada das notas %0.1f, %0.1f, %0.1f, e: %0.2f",num1,num2,num3,mediaPd);
    return 0;
    
}