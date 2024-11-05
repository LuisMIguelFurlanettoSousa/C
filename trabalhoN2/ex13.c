#include <stdio.h>

int main() {
    
    int num, soma = 0;
    
    while(1){
        
        printf("informe um numero ( 0 encerra o programa): ");
        scanf("%d", &num);
        
        if(num == 0){
            break;
        }
        
        if(num % 3 == 0){
            
            soma += num;
        }
    }
    
    printf("A soma dos multiplos de tres é: \n%d", soma);
    
    return 0;
}