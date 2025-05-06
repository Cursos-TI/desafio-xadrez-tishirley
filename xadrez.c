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

    return 0;
}
