#include <stdio.h>

int main() {
    int num, fatorial = 1, i = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número inválido! Por favor, insira um número não negativo.\n");
        return 1; 
    }

    while (i <= num) {
        fatorial *= i;  
        i++;        
    }

    printf("O fatorial de %d é: %d\n", num, fatorial);

    return 0;
}