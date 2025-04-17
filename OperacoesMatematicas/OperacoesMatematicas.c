// Inclui a biblioteca padrão para entrada e saída (printf, scanf)
#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os números e os resultados
    int num1, num2, num3;
    int soma, multiplicacao;

    // Solicita o primeiro número ao usuário
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1); // Lê o primeiro número digitado

    // Solicita o segundo número ao usuário
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2); // Lê o segundo número digitado

    // Solicita o terceiro número ao usuário
    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3); // Lê o terceiro número digitado

    // Realiza a soma dos três números
    soma = num1 + num2 + num3;

    // Realiza a multiplicação dos três números
    multiplicacao = num1 * num2 * num3;

    // Exibe a soma dos números para o usuário
    printf("Soma dos valores: %d\n", soma);

    // Exibe a multiplicação dos números para o usuário
    printf("Multiplicação dos valores: %d\n", multiplicacao);

    // Verifica se a soma é maior que 100 usando o comando if
    if (soma > 100) {
        // Se a soma for maior que 100, exibe esta mensagem
        printf("A soma dos números é maior que 100.\n");
    } else {
        // Se a soma for menor ou igual a 100, exibe esta mensagem
        printf("A soma dos números é menor ou igual a 100.\n");
    }

    // Fim do programa
    return 0;
}