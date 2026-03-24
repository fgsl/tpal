#include <stdio.h>

void main()
{
    int numeros[] = {0,0,0,0}; 
    int j, soma = 0;
    float media;
    
    for(int i=0;i<4;i++) // i++ equivale a i=i+1
    {
        j = i+1;
        printf("\nDigite a nota %d: ",j);
        scanf("%d",&numeros[i]);
        soma+= numeros[i]; 
        
    }

    media = (float) soma/4;
    
    printf("A média das notas é %.2f",media);
}
