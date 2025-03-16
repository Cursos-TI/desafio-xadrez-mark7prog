#include <stdio.h>

//Utilizando recurso Recursivo para simplificar o código.

void rtorre(int nt){

    if (nt > 0)
    {
    
    printf("Direita\n");
    rtorre(nt - 1);
}
}

void rrainha(int nr){

    if(nr > 0){

    printf("Esquerda\n");
    rrainha(nr - 1);
}
} 

int main(){

int torre, rainha, bispo = 1, cavalo;

//Loop recursivo - Torre.
    printf("Torre - Movimento:\n\n");
    torre = 5;
    rtorre(torre);

    printf("\n");

//Loop aninhado utilizado - For(While).
    
    printf("Bispo - Movimento:\n\n");

    for (bispo = 0; bispo < 5; bispo++)
    {
        while (bispo < 5)
        {
            printf("Cima\t");
            break;
        }
        printf("Direita\n");
    }

    printf("\n");

//Loop Recursivo - Rainha.
    
    printf("Rainha - Movimento:\n\n");

    rainha = 8;
    rrainha(rainha);
    
    printf("\n");

//Loop aninhado utilizado - For (While).

    printf("Cavalo - Movimento:\n\n");

    for (cavalo = 1; cavalo <= 1; cavalo++)
    {
        while (cavalo <= 2)
        {
            printf("Cima\n");
            cavalo++;
        }
        printf("Direita\n");
    }


    printf("\n");

    return 0;

}