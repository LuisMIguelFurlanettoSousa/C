#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    do {
        printf("Digite um número (negativo para sair): ");
        scanf("%f", &numero);

        if (numero >= 0) {
            printf("A raiz quadrada de %.2f é: %.2f\n", numero, sqrt(numero));
        }
    } while (numero >= 0);

    printf("Número negativo digitado. Encerrando o programa.\n");

    return 0;
}