/*
Escrever um algoritmo em C para exibir os múltiplos de 11 e a soma dos múltiplos de 11, em ordem
decrescente (inversa), compreendidos entre o intervalo: [300 400].
 */
#include <stdio.h>

int main() {
    int Summ = 0;

    for (int i = 400; i > 300; i--){
        if (i % 11 == 0){
            Summ += i;
        }
    }
    printf("The summ of 11 multiples is: %.i\n",Summ);
    return 0;
}