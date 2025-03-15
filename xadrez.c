#include <stdio.h>

int main(){

int torre, rainha = 1, bispo = 1, cavalo;

//Loop utilizado - For.
    printf("Torre - Movimento:\n\n");

    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

    printf("\n");

//Loop utilizado - While.
    
    printf("Bispo - Movimento:\n\n");

    while (bispo <= 5)
    {
        printf("Cima/Direita\n");

        bispo++;
    }

    printf("\n");

//Loop utilizado - Do While.
    
    printf("Rainha - Movimento:\n\n");

    do
    {
        printf("Esquerda\n");

        rainha++;

    } while (rainha <= 8);
    
    printf("\n");

//Loop aninhado utilizado - For (While).

    printf("Cavalo - Movimento:\n\n");

    for (cavalo = 1; cavalo <= 1; cavalo++)
    {
        while (cavalo <= 2)
        {
            printf("Baixo\n");
            cavalo++;
        }
        printf("Esquerda\n");
    }
    
    printf("\n");

    return 0;

}