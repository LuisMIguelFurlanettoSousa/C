#include <stdio.h>

int main() {
    int opcao = 0;
    float num1, num2, resultado;

    while (opcao != 5) {
        printf("\nMenu da Calculadora:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Divisão\n");
        printf("4 - Multiplicação\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1: 
                resultado = num1 + num2;
                printf("O resultado da soma é: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("O resultado da subtração é: %.2f\n", resultado);
                break;
            case 3: 
                if (num2 != 0) { 
                    resultado = num1 / num2;
                    printf("O resultado da divisão é: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero não é permitida!\n");
                }
                break;
            case 4: 
                resultado = num1 * num2;
                printf("O resultado da multiplicação é: %.2f\n", resultado);
                break;
            case 5: 
                printf("Encerrando o programa.\n");
                break;
            default: 
                printf("Opção inválida! Por favor, escolha uma opção de 1 a 5.\n");
        }
    }

    return 0;
}