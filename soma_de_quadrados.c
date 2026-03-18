#include <stdio.h>

void main()
{
    int n1,n2,n3,n4;
    int q1,q2,q3,q4;
    int soma;
    
    printf("\nDigite o número 1: ");
    scanf("%d",&n1);
    printf("\nDigite o número 2: ");
    scanf("%d",&n2);
    printf("\nDigite o número 3: ");
    scanf("%d",&n3);
    printf("\nDigite o número 4: ");
    scanf("%d",&n4);           
    
    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;
    q4 = n4 * n4;
    
    soma = q1 + q2 + q3 + q4;
    
    printf("A soma dos quadrados é %d",soma);
}