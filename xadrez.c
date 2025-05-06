#include <stdio.h>


int main() {
    int i = 1; // variável de incremento

    printf("Torre\n");

    while (i <= 5) { // Condição
        printf("%d\n", i); // Saída
        i++; //Incremento
        printf("Direita\n");
    
        printf("\n");
    }
    
    printf("Bispo\n");

    do { //Entrada (1x pelo menos)
        printf("%d\n", 1); //Saída
        i++; //Incremento
    } while (i <= 5); //Condição

    printf("Cima, Direita\n");
    printf("\n");

    printf("Rainha\n");

    // inicialização, condição e incremento

    for (int i = 1; i <= 8; i++) {
        printf("%d\n", i);
        printf("Esquerda\n");
        printf("\n");

    }

    return 0;
}
