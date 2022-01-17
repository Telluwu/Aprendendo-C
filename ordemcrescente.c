#include <stdio.h>
/* ordenar 3 valores por ordem crescente, sem recurso a vetores.
utilizador vai inserir a, b, c por ordem aleatória
função void vai ordenar, para que a, b, c esteja por ordem, ou seja por
a > b > c, visto que não há forma da função dar return aos 3 valores por ordem. */
void ordena(int *valorA, int *valorB, int *valorC);

int main() {
    int a, b, c;

    printf("Insira os tres valores a ordenar:");
    scanf("%d %d %d", &a, &b, &c);

    ordena(&a, &b, &c); //enviar endereços à função para ela apontar para os valores dos endereços
    printf("Valores a, b, c ordenados por ordem crescente: %d %d %d", a, b, c);

    return 0;
}

void ordena(int *valorA, int *valorB, int *valorC){ //esquema samsung notes
    int temp;
    if(*valorA>*valorB){ //nao e preciso else pois, caso isto nao se verifique, a e b tao corretos (a<b)
        temp = *valorA;
        *valorA = *valorB;
        *valorB = temp; //A, e agora sim a<b
    }
    if(*valorA>*valorC){
        temp = *valorA;
        *valorA = *valorC;
        *valorC = temp;
    }
    if(*valorB>*valorC){
        temp = *valorB;
        *valorB = *valorC;
        *valorC = temp;
    }
}