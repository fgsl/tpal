#include <stdio.h>

void main()
{
    float entradas[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //  float entradas[10];
    float saidas[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    //  float saidas[10];
    int contador, i;

    // Leitura dos valores
    for (contador = 1; contador <= 10; contador++)
    {
        printf("Digite o %dº valor: ", contador);
        i = contador - 1;
        scanf("%f", &entradas[i]);

        // Verifica se o índice é par
        if (i % 2 == 0)
        {
            saidas[i] = i * 5;
        }
        else
        {
            saidas[i] = i + 5;
        }
    }
    // Exibindo vetor entradas
    printf("\nLista de entradas:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f\n", entradas[i]);
    }

    // Exibindo vetor saidas
    printf("\nLista de saidas:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f\n", saidas[i]);
    }
}
