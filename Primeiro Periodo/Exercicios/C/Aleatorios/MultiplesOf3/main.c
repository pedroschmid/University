/*
 Escrever um algoritmo em C para exibir os múltiplos de 3 compreendidos no intervalo: [3 100].
 */
#include <stdio.h>

int main() {
    for (int i = 0; i < 100; i++){
        if (i % 3 == 0){
            printf("The multiples are: %.i\n",i);
        }
    }
    return 0;
}