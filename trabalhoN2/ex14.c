#include <stdio.h>
#include <math.h>

int main(){
    int expoente, i = 0, soma = 0;
    
    printf("Informe um numero para ser o ultimo expoente: ");
    scanf("%d", &expoente);
    
    while(i <= expoente){
        soma += pow(3, i);
        i++;
    }
    
    printf("O somatorio da serie é: %d", soma);
    
    return 0;
}