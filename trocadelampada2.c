#include <stdio.h>

void main()
{
    int tem_alguem_para_segurar_a_escada = 0;
    int a_lampada_nova_esta_funcionando = 0;
    char resposta;

    do
    {
        printf("Comprar a lâmpada nova\n");
        printf("Desligar a energia\n");
        printf("Pegar a escada\n");

        printf("Tem alguém para segurar a escada? (S) Sim - (N) Não ");
        scanf("%c",&resposta);
        getchar();
        tem_alguem_para_segurar_a_escada = (resposta == 'S' ? 1 : 0);
        if (tem_alguem_para_segurar_a_escada)
        {
            printf("Pedir para alguém segurar a escada\n");
            printf("Pedir para alguém segurar a lâmpada\n");
        }
        else
        {
            printf("Colocar mesa para apoiar a escada\n");
        }
        printf("Posicionar a escada embaixo da lâmpada\n");
        printf("Pegar a lâmpada nova\n");
        printf("Subir a escada com a lâmpada na mão\n");
        printf("Esperar a lâmpada esfriar\n");
        printf("Desrosquear a lâmpada antiga\n");
        printf("Guardar a lâmpada antiga no bolso\n");
        printf("Rosquear a lâmpada nova\n");
        printf("Descer da escada\n");
        printf("Guardar a escada\n");
        printf("Deixar a lâmpada aniga de lado\n");
        printf("Religar a energia\n");
        printf("A lâmpada nova está funcionando? (S) Sim (N) Não\n");
        scanf("%c",&resposta);
        getchar();
        a_lampada_nova_esta_funcionando = (resposta == 'S' ? 1 : 0);
    } while (!a_lampada_nova_esta_funcionando);
    printf("Descartar a lâmpada antiga\n");
}