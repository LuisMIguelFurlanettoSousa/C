#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void embaralhar(char *tabela, int tamanho) {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual
    for (int i = tamanho - 1; i > 0; i--) {
        int j = rand() % (i + 1); // Gera um índice aleatório entre 0 e i
        // Troca os elementos tabela[i] e tabela[j]
        char temp = tabela[i];
        tabela[i] = tabela[j];
        tabela[j] = temp;
    }
}

// Tabela de caracteres (incluindo letras, números e símbolos)
char tabela[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-_=+[]{}|;:',.<>?/";
int tamanho = sizeof(tabela) - 1;

// Tamanho da tabela
#define TAM_TABELA 77

// Funções principais
void criptografarMensagem(char mensagem[], char chave[]);
void descriptografarMensagem(char mensagem[], char chave[]);

// Função para encontrar a posição de um caractere na tabela
int encontrarPosicao(char c);

int main() {
    char mensagem[256];
    char chave[50];
    int opcao;

    printf("=== Criptografia Segura ===\n");

    while (1) {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Criptografar mensagem\n");
        printf("2 - Descriptografar mensagem\n");
        printf("3 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();  // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                embaralhar(tabela, tamanho);
                printf("\nDigite a mensagem para criptografar: ");
                fgets(mensagem, 256, stdin);
                mensagem[strcspn(mensagem, "\n")] = '\0';  // Remove o '\n'

                printf("Digite a chave (string): ");
                fgets(chave, 50, stdin);
                chave[strcspn(chave, "\n")] = '\0';  // Remove o '\n'

                criptografarMensagem(mensagem, chave);
                printf("Mensagem criptografada: %s\n", mensagem);
                break;

            case 2:
                printf("\nDigite a mensagem para descriptografar: ");
                fgets(mensagem, 256, stdin);
                mensagem[strcspn(mensagem, "\n")] = '\0';  // Remove o '\n'

                printf("Digite a chave (string): ");
                fgets(chave, 50, stdin);
                chave[strcspn(chave, "\n")] = '\0';  // Remove o '\n'

                descriptografarMensagem(mensagem, chave);
                printf("Mensagem descriptografada: %s\n", mensagem);
                break;

            case 3:
                printf("\nSaindo do programa...\n");
                return 0;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    }
    return 0;
}

// Função para criptografar a mensagem
void criptografarMensagem(char mensagem[], char chave[]) {
    int chaveTamanho = strlen(chave);
    for (int i = 0; i < strlen(mensagem); i++) {
        int pos = encontrarPosicao(mensagem[i]);
        if (pos != -1) {  // Caractere válido para criptografia
            // Calcula o deslocamento com base na chave
            int deslocamento = chave[i % chaveTamanho] % TAM_TABELA;
            mensagem[i] = tabela[(pos + deslocamento) % TAM_TABELA];
        }
    }
}

// Função para descriptografar a mensagem
void descriptografarMensagem(char mensagem[], char chave[]) {
    int chaveTamanho = strlen(chave);
    for (int i = 0; i < strlen(mensagem); i++) {
        int pos = encontrarPosicao(mensagem[i]);
        if (pos != -1) {  // Caractere válido para descriptografia
            // Calcula o deslocamento com base na chave
            int deslocamento = chave[i % chaveTamanho] % TAM_TABELA;
            mensagem[i] = tabela[(pos - deslocamento + TAM_TABELA) % TAM_TABELA];
        }
    }
}

// Função para encontrar a posição de um caractere na tabela
int encontrarPosicao(char c) {
    for (int i = 0; i < TAM_TABELA; i++) {
        if (tabela[i] == c) {
            return i;
        }
    }
    return -1;  // Caractere não encontrado
}