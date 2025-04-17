#include <stdio.h>

void calcularMedia(int *array, int tamanho, float *media) {
    int soma = 0;
    int *ptr = array; // Ponteiro para percorrer o array
    
    for (int i = 0; i < tamanho; i++) {
        soma += *ptr; // Adiciona o valor apontado por ptr à soma
        ptr++;        // Avança o ponteiro para o próximo elemento
    }
    
    *media = (float)soma / tamanho; // Calcula a média e armazena no endereço apontado
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Calcula o tamanho do array
    float media;
    
    calcularMedia(numeros, tamanho, &media); // Chama a função passando o array e o endereço da média
    
    printf("Média dos valores: %.2f\n", media);
    
    return 0;
}