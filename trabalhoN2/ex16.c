#include <stdio.h>

int main() {
    int opcao = 0;
    float temperatura, convertida;

    while (opcao != 4) {
        printf("\nMenu de Conversão de Temperatura:\n");
        printf("1 — Converter de Celsius para Fahrenheit\n");
        printf("2 — Converter de Celsius para Kelvin\n");
        printf("3 — Converter de Fahrenheit para Celsius\n");
        printf("4 — Sair\n");
        printf("Informe a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                convertida = (temperatura * 9 / 5) + 32;
                printf("A temperatura em Fahrenheit é: %.2f°F\n", convertida);
                break;

            case 2: 
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                convertida = temperatura + 273.15;
                printf("A temperatura em Kelvin é: %.2fK\n", convertida);
                break;

            case 3:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                convertida = (temperatura - 32) * 5 / 9;
                printf("A temperatura em Celsius é: %.2f°C\n", convertida);
                break;

            case 4:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida! Por favor, escolha uma opção de 1 a 4.\n");
        }
    }

    return 0;
}