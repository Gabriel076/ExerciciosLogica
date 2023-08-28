#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int quantSand;
    
    printf("Digite a quantidade de sanduiches: ");
    scanf("%d",&quantSand);
    
    printf("\nPara produzir %d sanduiches serao necessarios:\n",quantSand);
    printf("%0.3f kgs de mussarela\n",quantSand*0.100);
    printf("%0.3f kgs de presunto\n",quantSand*0.50);
    printf("%0.3f kgs de hamburger",quantSand*0.120);
    return 0;
}