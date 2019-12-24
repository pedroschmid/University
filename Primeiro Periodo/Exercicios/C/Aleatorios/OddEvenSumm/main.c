/*
Faça um algoritmo que exiba a soma dos PARES e ÍMPARES compreendidos entre [999 100].
 */
#include <stdio.h>

int main() {
    int summEven = 0;
    int summOdd = 0;
    int totalSumm = 0;

    for (int i = 100; i < 999; i++){
        if (i % 2 == 0){
            summEven += i;
        } else {
            summOdd += i;
        }
    }
    totalSumm = summEven + summOdd;

    printf("Even summ: %.i\n",summEven);
    printf("Odd summ: %.i\n",summOdd);
    printf("Total summ: %.i\n",totalSumm);

    return 0;
}