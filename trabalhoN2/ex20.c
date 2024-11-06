#include <stdio.h>

int main() {
    int numero, maior = 0;

    do {
        printf("Digite um número inteiro positivo (-1 para sair): ");
        scanf("%d", &numero);

        if (numero > maior && numero != -1) {
            maior = numero;
        }
    } while (numero != -1);

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}