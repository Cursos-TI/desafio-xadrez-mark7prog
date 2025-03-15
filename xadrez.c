#include <stdio.h>

int main(){

int torre, rainha = 1, bispo = 1;

//Loop utilizado - For.
    printf("Torre - Movimento:\n\n");

    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }

//Loop utilizado - While.
    
    printf("Bispo - Movimento:\n\n");

    while (bispo <= 5)
    {
        printf("Cima/Direita\n");

        bispo++;
    }

//Loop utilizado - Do While.
    
    printf("Rainha - Movimento:\n\n");

    do
    {
        printf("Esquerda\n");

        rainha++;

    } while (rainha <= 8);
    

    return 0;
    
}