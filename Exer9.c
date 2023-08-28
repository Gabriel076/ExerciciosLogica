#include <stdio.h> 
#include <stdlib.h>

int main()
{
   //trapezio
    float baseMaior,baseMenor,alturaTrap;
    
    //quadrado
    float lado;
    
    //retangulo
    float largura,altura;
    
    //circulo
    float raio;
    
    //triangulo
    float base ,alturaTri;
    
    //trapezio
    printf("Area do trapezio:\n");
    printf("Informe o valor da base maior: ");
    scanf("%f",&baseMaior);
    printf("Informe o valor da base menor: ");
    scanf("%f",&baseMenor);
    printf("Informe o valor da altura : ");
    scanf("%f",&alturaTrap);
    printf("A area do trapezio e: %0.2f\n",((baseMaior+baseMenor)*alturaTrap/2));
    printf("\n");
    
    //quadrado
    printf("Area do quadrado:\n");
    printf("Informe o valor de um dos lados: ");
    scanf("%f",&lado);
    printf("Area do quadrado: %0.2f\n",lado*lado);
    printf("\n");
        
    //retangulo
    printf("Area do retangulo\n");
    printf("Informe o valor de largura: ");
    scanf("%f",&largura);
    printf("Informe o valor da altura: ");
    scanf("%f",&altura);
    printf("A area do quadrado e: %0.2f\n",altura*largura);
    printf("\n");
    
    //circulo
    printf("Area do circulo:\n");
    printf("Informe o valor do raio: ");
    scanf("%f",&raio);
    printf("A area do quadrado e: %0.2f\n",3.14*(raio*raio));
    printf("\n");
    
    //triangulo
    printf("Area do triangulo:\n");
    printf("Informe o valor da base: ");
    scanf("%f",&base);
    printf("Informe o valor da altura: ");
    scanf("%f",&alturaTri);
    printf("A area do quadrado e: %0.2f",(base*alturaTri)/2);
    return 0;
    
}