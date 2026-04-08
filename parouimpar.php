<?php

function main()
{
    $entradas = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
    $saidas = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
    $contador = 0;$i=0;

    // Leitura dos valores
    for ($contador = 1; $contador <= 10; $contador++)
    {
        printf("Digite o {$contador}º valor: ");
        $i = $contador - 1;
        $entradas[$i] = readline();

        // Verifica se o índice é par
        if ($i % 2 == 0)
        {
            $saidas[$i] = $i * 5;
        }
        else
        {
            $saidas[$i] = $i + 5;
        }
    }
    // Exibindo vetor entradas
    printf("\nLista de entradas:\n");
    for ($i = 0; $i < 10; $i++)
    {
        printf("{$entradas[$i]}\n");
    }

    // Exibindo vetor saidas
    printf("\nLista de saidas:\n");
    for ($i = 0; $i < 10; $i++)
    {
        printf("$saidas[$i]\n");
    }
}

main();
