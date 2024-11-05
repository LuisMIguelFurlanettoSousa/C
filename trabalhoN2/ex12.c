#include <stdio.h>

int main() {

    int num, menorNum, maiorNum, primeiraEntrada = 1; 
    
    while (1) {
        printf("Insira um numero inteiro (0 para parar): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (primeiraEntrada) {

            menorNum = num;
            maiorNum = num;
            primeiraEntrada = 0;
        } else {

            if (num < menorNum) {
                menorNum = num;
            }
            if (num > maiorNum) {
                maiorNum = num;
            }
        }
    }
    
    if (!primeiraEntrada) {
        printf("O menor numero é: %d\n", menorNum);
        printf("O maior numero é: %d\n", maiorNum);
    } else {
        printf("Nenhum numero valido foi inserido.\n");
    };
    
    return 0;
}