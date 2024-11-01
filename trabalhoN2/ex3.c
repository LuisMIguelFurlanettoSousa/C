#include <stdio.h>

int main() {

int N, i;

printf("Insira um numero inteiro: ");
scanf("%d", &N);

for (i = 1; i <= N; i++){
    if (i % 7 == 0){
        printf("%d ", i);
        }
    }

    return 0;
}