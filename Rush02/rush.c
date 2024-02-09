#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAX_LINHA_DICIONARIO 100
#define NUMERO_MAX_ENTRADAS_DICIONARIO 100

typedef struct {
    int numero;
    char* texto;
} EntradaDicionario;

EntradaDicionario dicionario[NUMERO_MAX_ENTRADAS_DICIONARIO];
int tamanhoDicionario = 0;

// Protótipos de funções
void carregarDicionario(const char *nomeArquivo);
char* numeroParaPalavras(long long num);
void liberarDicionario();

int main(int argc, char *argv[]) {
    if (argc < 2 || argc > 3) {
        printf("Uso: %s <numero> [arquivo_dicionario]\n", argv[0]);
        return 1;
    }

    // Converter o argumento de entrada para um número
    char *endptr;
    long long num = strtoll(argv[1], &endptr, 10);

    // Verificar se o argumento é um inteiro positivo válido
    if (*endptr != '\0' || num <= 0) {
        printf("Erro\n");
        return 1;
    }

    // Carregar o dicionário
    if (argc == 3) {
        carregarDicionario(argv[2]);
    } else {
        // Carregar dicionário padrão se nenhum arquivo de dicionário for fornecido
        carregarDicionario("default.dict");
    }

    // Converter número em palavras
    char *resultado = numeroParaPalavras(num);
    if (resultado != NULL) {
        printf("%s\n", resultado);
        free(resultado);
    } else {
        printf("Erro no Dicionário\n");
    }

    // Liberar memória alocada
    liberarDicionario();

    return 0;
}

void carregarDicionario(const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo do dicionário");
        exit(1);
    }

    char linha[TAMANHO_MAX_LINHA_DICIONARIO];
    while (fgets(linha, sizeof(linha), arquivo)) {
        // Processar entrada do dicionário
        char *token = strtok(linha, ":");
        if (token != NULL) {
            int numero = atoi(token);
            char *texto = strtok(NULL, "\n");
            if (texto != NULL) {
                // Remover espaços em branco antes e depois do texto
                while (isspace(*texto)) texto++;
                for (int i = strlen(texto) - 1; (i >= 0 && isspace(texto[i])); i--) texto[i] = '\0';

                // Armazenar entrada do dicionário
                dicionario[tamanhoDicionario].numero = numero;
                dicionario[tamanhoDicionario].texto = strdup(texto);
                tamanhoDicionario++;
            }
        }
    }

    fclose(arquivo);
}

char* numeroParaPalavras(long long num) {
    // Implementação para converter número em palavras usando o dicionário carregado
    // Você precisa implementar esta função de acordo com seus requisitos
    return NULL;
}

void liberarDicionario() {
    for (int i = 0; i < tamanhoDicionario; i++) {
        free(dicionario[i].texto);
    }
}

