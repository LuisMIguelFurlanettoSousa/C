#include <stdio.h>

int main(){
    int soma = 0, i;

    for (i = 0; i <= 500; i++){
        if (i % 2 == 0 && i % 3 == 0){
            soma += 1;
        }
    }

    printf("soma = %d", soma);

    return 0;
}