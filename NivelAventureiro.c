 #include <stdio.h>
   
 
 int main() {
    // 1 - Criar uma matriz 10x10 de inteiros
    int tabuleiro [10] [10];

    // 2 - Preencher a matriz com zeros 
    // Usamos dois Loops aninhados para preencher a matriz linha por linha
    for (int i = 0; i < 10; i++) {
       for (int j = 0; j < 10; j++) {
          tabuleiro[i][j] = 0; // Preenche a posição com 0
       }
    }
     
    // 3 - Imprimir a matriz para ver se está certo
    printf("Tabuleiro inicial:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime a posição

        }
        printf("\n"); // vai para a linha seguinte para imprimir a próxima linha
    }

       return 0;
}