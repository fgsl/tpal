#include <stdio.h>

void main()
{
    int numero1,numero2,soma;
    printf("\nDigite o primeiro número: ");
    scanf("%d",&numero1);
    printf("\nDigite o segundo número: ");
    scanf("%d",&numero2);
    soma = numero1 + numero2;
    printf("\nA soma de %d com %d é igual a %d",numero1,numero2,soma);    
}