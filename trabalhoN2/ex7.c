#include <stdio.h>
#include <math.h>

int main() {

    int N, i, soma, resultado;

    printf("Informe um numero: ");
    scanf("%d", &N);

    soma = 0;
    
    for (i = 1; i <= N; i++){
        
        resultado = pow(i, i);
        
        printf("%d ^ %d = %d \n", i, i , resultado);
        soma += resultado;
    }
    printf("A soma total dos resultados é %d", soma);

    return 0;
}