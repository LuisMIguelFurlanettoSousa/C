#include <stdio.h>

int main() {
    int N, i;
    float A = 0.0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O valor de N deve ser positivo.\n");
        return 1;
    }

    i = 1; 
    while (i <= N) {
        A += (float)N / i;
        i++;
    }

    printf("O valor de A é: %.2f\n", A);

    return 0;
}