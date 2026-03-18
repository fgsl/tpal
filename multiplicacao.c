#include <stdio.h>

void main()
{
    int numero1,numero2;
    int contador1=0,contador2=0,produto=0;
    
    printf("Digite o primeiro número ");
    scanf("%d",&numero1);
    
    printf("Digite o segundo número ");
    scanf("%d",&numero2);
    
    while (contador1 < numero1)
    {
        contador2 = 0;
        while (contador2 < numero2)
        {
            produto = produto + 1;
            contador2 = contador2 + 1;
        }
        contador1 = contador1 + 1;
    }
    printf("\nO produto é %d",produto);
    
    
}
