#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float peso;
   
    printf("Informe o peso em KG: ");
    scanf("%f",&peso);
   
   printf("Caso a pessoa engorde 15%% ficara com: %0.2f KG\n",peso+(peso*0.15));
   printf("Caso a pessoa engorde 20%% ficara com: %0.2f KG",peso+(peso*0.20));
    return 0;
    
}