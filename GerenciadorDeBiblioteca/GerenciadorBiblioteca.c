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
    if (totalLivros >= MAX_LIVROS) {  // Verifica se o limite de livros foi atingido
        printf("Limite de livros atingido.\n");

        return;
    }

    Livro novoLivro;  // Cria uma nova variável do tipo Livro

    // Solicita ao usuário os dados do novo livro
    printf("ID do livro: ");
    scanf("%d", &novoLivro.id);
    getchar();  // Consome o caractere de nova linha deixado pelo scanf
    
    printf("Titulo: ");
    fgets(novoLivro.titulo, 100, stdin);
    novoLivro.titulo[strcspn(novoLivro.titulo, "\n")] = '\0';  // Remove a quebra de linha
    
    printf("Autor: ");
    fgets(novoLivro.autor, 100, stdin);
    novoLivro.autor[strcspn(novoLivro.autor, "\n")] = '\0';  // Remove a quebra de linha
    
    printf("Data de publicacao (DD/MM/AAAA): ");
    fgets(novoLivro.dataPublicacao, 11, stdin);
    getchar();  // Consome a quebra de linha
    
    printf("Genero: ");
    fgets(novoLivro.genero, 50, stdin);
    novoLivro.genero[strcspn(novoLivro.genero, "\n")] = '\0';  // Remove a quebra de linha
    
    printf("Numero de copias: ");
    scanf("%d", &novoLivro.numCopias);

    livros[totalLivros++] = novoLivro;  // Adiciona o novo livro ao array e incrementa o contador
    
    salvarLivros();  // Salva os livros no arquivo
    
    printf("Livro criado com sucesso.\n");
}

// Função para listar todos os livros
void listarLivros() {
    if (totalLivros == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    for (int i = 0; i < totalLivros; i++) {
        // Exibe os detalhes de cada livro
        printf("\nID: %d\nTitulo: %s\nAutor: %s\nData de Publicacao: %s\nGenero: %s\nCopias Disponiveis: %d\n", livros[i].id, livros[i].titulo, livros[i].autor, livros[i].dataPublicacao, livros[i].genero, livros[i].numCopias);
    }
}

// Função para buscar um livro pelo ID
void buscarLivro() {
    int id;

    printf("Digite o ID do livro: ");
    scanf("%d", &id);

    // Percorre o array de livros para encontrar o livro com o ID especificado
    for (int i = 0; i < totalLivros; i++) {
        if (livros[i].id == id) {
            // Exibe os detalhes do livro encontrado
            printf("\nID: %d\nTitulo: %s\nAutor: %s\nData de Publicacao: %s\nGenero: %s\nCopias Disponiveis: %d\n", livros[i].id, livros[i].titulo, livros[i].autor, livros[i].dataPublicacao, livros[i].genero, livros[i].numCopias);
            return;
        }
    }

    printf("Livro não encontrado.\n");  // Se o livro não for encontrado, exibe uma mensagem
}

// Função para editar um livro existente
void editarLivro() {
    int id;

    printf("Digite o ID do livro: ");
    scanf("%d", &id);

    // Percorre o array de livros para encontrar o livro com o ID especificado
    for (int i = 0; i < totalLivros; i++) {
        if (livros[i].id == id) {
            // Solicita ao usuário os novos dados do livro
            getchar();  // Consome o caractere de nova linha deixado pelo scanf
            printf("Novo Titulo: ");
            fgets(livros[i].titulo, 100, stdin);
            livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';  // Remove a quebra de linha

            printf("Novo Autor: ");
            fgets(livros[i].autor, 100, stdin);
            livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';  // Remove a quebra de linha

            printf("Nova Data de Publicacao (DD/MM/AAAA): ");
            fgets(livros[i].dataPublicacao, 11, stdin);
            getchar();  // Consome a quebra de linha

            printf("Novo Genero: ");
            fgets(livros[i].genero, 50, stdin);
            livros[i].genero[strcspn(livros[i].genero, "\n")] = '\0';  // Remove a quebra de linha

            printf("Novo Numero de Copias: ");
            scanf("%d", &livros[i].numCopias);

            salvarLivros();  // Salva os livros no arquivo

            printf("Livro editado com sucesso.\n");

            return;
        }
    }

    printf("Livro não encontrado.\n");  // Se o livro não for encontrado, exibe uma mensagem
}

// Função para deletar um livro
void deletarLivro() {
    int id;

    printf("Digite o ID do livro: ");
    scanf("%d", &id);

    // Percorre o array de livros para encontrar o livro com o ID especificado
    for (int i = 0; i < totalLivros; i++) {
        if (livros[i].id == id) {
            // Remove o livro deslocando os livros subsequentes uma posição para trás
            for (int j = i; j < totalLivros - 1; j++) {
                livros[j] = livros[j + 1];
            }
            totalLivros--;  // Decrementa o contador de livros

            salvarLivros();  // Salva os livros no arquivo

            printf("Livro deletado com sucesso.\n");
            
            return;
        }
    }

    printf("Livro não encontrado.\n");  // Se o livro não for encontrado, exibe uma mensagem
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