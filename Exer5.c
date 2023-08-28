#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int num1,num2;
    float result;
    
    printf("Informe o valor 1: ");
    scanf("%d",&num1);
    
    printf("Informe o valor 2: ");
    scanf("%d",&num2);
    
    result = (float)num1/(float)num2;
    
    if(num2!=0){
    printf("A divisao de %d por %d e: %0.1f",num1,num2,result);
    }else{
        printf("A divisao de %d por %d nao pode ser feito por que o %d nao pode ser dividido por %d",num1,num2,num1,num2);
    }
    return 0;
    
}