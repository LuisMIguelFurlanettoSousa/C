#include <stdio.h>

int main() {

    int m, n, i, somaImpar;

    printf("Insira dois valores: ");
    scanf("%d %d", &m, &n);
    
    for (i = m; i <= n; i++){
        if (i % 2 != 0){
            somaImpar += i;
        }
    }
    
    printf("A soma dos numero impares de %d ate %d é %d", m, n, somaImpar);

    return 0;
}