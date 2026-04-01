#include <stdio.h>

void main()
{
    char simbolo;
    int jogador_venceu = 0, todas_as_casas_preenchidas = 0;
    char tabuleiro[3][3] = {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '},
    };
    int linha,coluna;
    int dado_invalido = 0;

    do {
        printf("Qual símbolo você deseja usar? ");
        scanf("%c",&simbolo);
    }
    while (simbolo != 'O' && simbolo != 'X');
    printf("\nVocê escolheu o símbolo %c",simbolo);
    do {
        do {
            if (dado_invalido){
                printf("Dados inválidos");
            }
            printf("\nQual é a linha? ");
            scanf("%d",&linha);
            printf("\nQual é a coluna? ");
            scanf("%d",&coluna);
            dado_invalido = 1;
        } while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 );
        tabuleiro[linha][coluna] = simbolo;
        for(int i=0;i<3;i++)
        {
            printf("\n _  _  _\n");
            for(int j=0;j<3;j++)
            {
                printf("|%c|",tabuleiro[i][j]);
            }
            
        }        
    } while (!jogador_venceu && 
    !todas_as_casas_preenchidas);
}
