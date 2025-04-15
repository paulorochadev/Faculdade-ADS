#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 100  // Número máximo de livros que podem ser armazenados
#define FILENAME "biblioteca.txt"  // Nome do arquivo para salvar os registros

// Estrutura que representa um livro
typedef struct {
    int id;                  // ID do livro
    char titulo[100];        // Título do livro
    char autor[100];         // Autor do livro
    char dataPublicacao[11]; // Data de publicação (formato: DD/MM/AAAA)
    char genero[50];         // Gênero do livro
    int numCopias;           // Número de cópias disponíveis
} Livro;

Livro livros[MAX_LIVROS];  // Array para armazenar os livros
int totalLivros = 0;       // Contador de quantos livros estão armazenados

// Função para carregar os livros do arquivo para a memória
void carregarLivros() {
    FILE *file = fopen(FILENAME, "r");  // Abre o arquivo para leitura
    if (file == NULL) return;  // Se o arquivo não existir, retorna sem fazer nada

    // Lê os livros do arquivo e armazena no array `livros`
    while (fscanf(file, "%d %[^\n] %[^\n] %[^\n] %[^\n] %d", 
            &livros[totalLivros].id, 
            livros[totalLivros].titulo, 
            livros[totalLivros].autor, 
            livros[totalLivros].dataPublicacao, 
            livros[totalLivros].genero, 
            &livros[totalLivros].numCopias) != EOF) {
        totalLivros++;  // Incrementa o contador de livros
    }

    fclose(file);  // Fecha o arquivo
}

// Função para salvar os livros da memória no arquivo
void salvarLivros() {
    FILE *file = fopen(FILENAME, "w");  // Abre o arquivo para escrita
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para salvar.\n");
        return;
    }

    // Escreve cada livro do array `livros` no arquivo
    for (int i = 0; i < totalLivros; i++) {
        fprintf(file, "%d\n%s\n%s\n%s\n%s\n%d\n", 
            livros[i].id, 
            livros[i].titulo, 
            livros[i].autor, 
            livros[i].dataPublicacao, 
            livros[i].genero, 
            livros[i].numCopias);
    }

    fclose(file);  // Fecha o arquivo
}

// Função para criar um novo livro
void criarLivro() {
    // Criar a Lógica
    printf("Função/Método de Criar um Livro\n");
}

// Função para listar todos os livros
void listarLivros() {
    // Criar a Lógica
    printf("Função/Método de Listar Livros\n");
}

// Função para buscar um livro pelo ID
void buscarLivro() {
    // Criar a Lógica
    printf("Função/Método de Buscar um Livro\n");
}

// Função para editar um livro existente
void editarLivro() {
    // Criar a Lógica
    printf("Função/Método de Editar um Livro\n");
}

// Função para deletar um livro
void deletarLivro() {
    // Criar a Lógica
    printf("Função/Método de Deletar um Livro\n");
}

// Função principal
int main() {
    carregarLivros();  // Carrega os livros do arquivo ao iniciar o programa
    int opcao;

    // Loop do menu principal
    do {
        printf("\n--- Gerenciador de Biblioteca ---\n");
        printf("1. Criar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Buscar Livro\n");
        printf("4. Editar Livro\n");
        printf("5. Deletar Livro\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Executa a função correspondente à opção escolhida
        switch (opcao) {
            case 1: criarLivro(); break;
            case 2: listarLivros(); break;
            case 3: buscarLivro(); break;
            case 4: editarLivro(); break;
            case 5: deletarLivro(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);  // Repete até o usuário escolher a opção de sair

    return 0;
}