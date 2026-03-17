#include <stdio.h>

void main()
{
    float cotacao_do_dolar;
    float valor_em_dolares;
    float valor_convertido;
    
    printf("Digite a cotação do dólar:");
    scanf("%f",&cotacao_do_dolar);
    
    printf("Digite o valor em dólares:");
    scanf("%f",&valor_em_dolares);

    valor_convertido = cotacao_do_dolar  * valor_em_dolares;
    
    printf("O valor convertido é R$ %.2f",valor_convertido);
}