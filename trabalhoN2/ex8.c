#include <stdio.h>

int fatorial(int n) {
    
    int resultado = 1;
    int i;

    for(i = 1; i <= n; i++){
        
        if (i == n){
            printf("%d = ", i);
        }
        else{
            printf("%d x ", i);
        }
        
        resultado *= i;
    }
    return resultado;
}

int main() {
    
    int numero; 
    
    printf("informe um numero: ");
    scanf("%d", &numero);
    
    int resultado = fatorial(numero);
    printf("%d", resultado);
}