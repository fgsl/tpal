#include <stdio.h>

int main()
{
  int numero; // variáveis em C devem ser declaradas com tipo e nome
  char nome[30]; // a linguagem C não tem um tipo para cadeias de caracteres (palavras) apenas para caracteres. Quando precisamos armazenar um texto, definimos uma matriz (array) de caracteres.
  printf("\nQual é o seu nome? "); // A função printf(), que imprime não está disponível no núcleo da linguagem. Ela está definida na biblioteca stdio.h, que contém funções de entrada e saída
  scanf("%s",nome); // A função scanf captura dados da entrada padrão e transfere para a variável indicada como segundo argumento. O identificador % informa como o dado deve ser formatado, neste caso como string (s)
  printf("\nDigite um número, %s: ",nome); // Para imprimir um valor que está em uma variável, usamos um marcador de posição com %, igual ao usado na leitura de dados. As variáveis tomam o lugar dos marcadores na ordem em que aparecem. 
  scanf("%d",&numero); // A função scanf requer um & se a variável não for um array, para indicar que o valor deve ser gravado no endereço de memória da variável. Arrays já retornam a referência ao valor, por isso não requerem &.
  int dobro = numero * 2;
  printf("%s, você digitou a metade de %d",nome,dobro);
}
