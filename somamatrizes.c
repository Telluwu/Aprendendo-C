#include <stdio.h> 
//programa para adicionar duas matrizes

int main() {
    int l, c, matrizA[100][100], matrizB[100][100], matrizSOMA[100][100], i, j;

    printf("Soma de duas matrizes com numero igual de linhas e colunas!\n");
    printf("Indica o numero de linhas:");
    scanf(" %d", &l);
    printf("Indica o numero de colunas:");
    scanf(" %d", &c);

    printf("\nMATRIZ A:\n");
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf("Insere o elemento A%d%d:", i + 1, j + 1); //elemento Alinhacoluna, e nao existe linha e coluna 0 
            scanf(" %d", &matrizA[i][j]);
        }
    }

    printf("\nMATRIZ B:\n");
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){ //a contagem é bem feita pois começa em 0
            printf("Insere o elemento B%d%d:", i + 1, j + 1); 
            scanf(" %d", &matrizB[i][j]);
        }
    }

    //adicionar as matrizes:
    for (i=0; i < l; i++){
        for (j = 0; j < c; j++){
            matrizSOMA[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    //print da matriz em forma de matriz:
    printf("\nSoma das duas matrizes:\n");
    for (i=0; i < l; i++){
        for (j = 0; j < c; j++){
           printf("%d\t", matrizSOMA[i][j]); // espaço entre colunas \t é um espaço maior (tab), como \n é enter
                if (j == c - 1) { //se contador j acabou (pois j < c, ou seja o max é j = c-1 pois nao e j <= c)
                 printf("\n\n"); //imprimir dois enter para a próxima linha começar.
      }
        }
    }



    return 0;
}