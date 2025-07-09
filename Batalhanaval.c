#include <stdio.h>

#define tamanho 5 

// definição do tamanho do tabuleiro como 5x5

int main() {
 // Criando o tabuleiro e preenchido com zeros ( vazio )
int tabuleiro [tamanho][tamanho] = {0};

// posições iniciais para dois navios
int x1 = 1, y1 = 2; // Navio que vai ficar em pé (vertical)
int x2 = 3, y2 = 0; // Navio que vai deitado (horizontal)

// Definição de quantos quadradinhos cada navio ocupa
int tamanho_navio_vertical = 3;
int tamanho_navio_horizontal = 4;

// Para o navio ficar na vertical no tabuleiro (usamos o número 1)
for (int i = 0; i <tamanho_navio_vertical; i++) { 
    tabuleiro[x1 + i][y1] = 1; 
 }

// Para o navio ficar na horizontal no tabuleiro (usamos o número 2)
for (int i = 0; i <tamanho_navio_vertical; i++) { 
     tabuleiro[x2 + i][y2] = 2; 
 }

 // Mostrando as coordenadas de cada parte dos navios
printf("=== BATALHA NAVAL - NIVEL NOVATO ===\n\n");

printf("Coordenadas do navio em pé (vertical):\n");
for (int i = 0; i < tamanho_navio_vertical; i++) {
    printf("Linha %d, Coluna %d\n", x1 + i, y1);
}

printf("\nCoordenadas do navio deitado (horizontal):\n");
for (int i = 0; i < tamanho_navio_horizontal; i++) {
      printf("Linha %d, Coluna %d\n", x2, y2 + i);
}

 // mostrar o tabuleiro inteiro com os navios posicionados
 printf("\nVisual do tabuleiro:\n");
printf("(0 = vazio, 1 = navio vertical, 2 = navio horizontal)\n\n");

for (int i = 0; i < TAMANHO; i++) {
for (int j = 0; j < TAMANHO; j++) {
         printf("%d ", tabuleiro[i][j]);
     }
      printf("\n");
 }

    return 0;
}
