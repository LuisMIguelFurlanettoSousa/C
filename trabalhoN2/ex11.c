#include <stdio.h>

int main() {
    
    const float pi = 3.14159;
    float raio = -1, circuferencia;
    
    printf("Insira o raio do circulo: ");

    
    while(raio < 0){
        scanf("%f", &raio);
        if(raio < 0){
            printf("O raio não pode ser negativo. Tente novamente: \n");
        }
    }
    
    circuferencia = 2 * pi * raio;
    
    printf("A circuferencia do circulo é: %.2f", circuferencia);
    
    return 0;
}