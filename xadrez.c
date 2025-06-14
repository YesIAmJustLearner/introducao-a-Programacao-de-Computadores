#include <stdio.h> 

int main()
{
    int passosTorre = 5;
    int passosBispo = 5;
    int passosRainha = 8;

    // --- Movimento da Torre ---
    printf("A torre se move %d casas para a direita:\n", passosTorre);
    for (int i = 0; i < passosTorre; i++)
    {
        printf("  > Direita\n");
    }

    // --- Movimento do Bispo ---
    printf("\nO bispo, avanca %d casas na diagonal (cima e direita):\n", passosBispo);
    int contadorBispo = 0;
    while (contadorBispo < passosBispo)
    {
        printf("  ^ Cima, > Direita\n");
        contadorBispo++;
    }

    // --- Movimento da Rainha ---
    // A rainha é poderosa, ela vai 8 casas para a esquerda, sem pensar muito
    printf("\nE a rainha? Ela vai de uma vez %d casas para a esquerda:\n", passosRainha);
    int i = 0;
    do
    {
        printf("  < Esquerda\n");
        i++;
    } while (i < passosRainha);

    return 0;
}