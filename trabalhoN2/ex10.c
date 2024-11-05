#include <stdio.h>

int main() {
    
    int n = 1;
    int cont = 0;

    while (n != 0) {
        
        printf("Informe um numero (0 para encerrar o programa): ");
        scanf("%d", &n);
        
        if (n != 0) {
            cont += 1;
        }
    }
    printf("Você informou %d números.\n", cont); 
    
    return 0;
}