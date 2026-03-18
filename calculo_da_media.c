#include <stdio.h>

void main()
{
    int n1,n2,n3,n4;
    float media;
    
    printf("\nDigite a nota 1: ");
    scanf("%d",&n1);
    printf("\nDigite a nota 2: ");
    scanf("%d",&n2);
    printf("\nDigite a nota 3: ");
    scanf("%d",&n3);
    printf("\nDigite a nota 4: ");
    scanf("%d",&n4);            

    media = (n1+n2+n3+n4)/4;
    
    printf("A média das notas é %.2f",media);
}