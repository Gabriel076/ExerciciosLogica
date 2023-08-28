#include <stdio.h> 
#include <stdlib.h>

int main()
{
    int num;
    
    printf("Informe o numero para o calculo da tabuada: ");
    scanf("%d",&num);
    
    for(int i=0;i<10;i++){
        printf("%d + %d = %d            %d - %d = %d\n",num,i,num+i,num,i,num-i);
    }
    
    printf("\n\n");
    
    for(int i=0;i<10;i++){
        if(i==0){
            printf("%d X %d = %d            %d / %d = Nao existe numero divisivel por zero\n",num,i,num*i,num,i);
        }else{
        printf("%d X %d = %d            %d / %d = %d\n",num,i,num*i,num,i,num/i);
        }
    }
    return 0;
    
}