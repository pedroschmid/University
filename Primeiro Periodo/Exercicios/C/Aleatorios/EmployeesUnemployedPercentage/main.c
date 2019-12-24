/*
Escreva um algoritmo em C que leia de 10.000 habitantes de uma pequena cidade se está empregado ou
não e exiba em porcentagem a quantidade de empregados e desempregados desta pequena cidade.
 */

#include <stdio.h>

int main() {
    int Populations, Employed, Unemployed = 0;
    Populations = 10000;

    printf("Insert how many habitants are employed: \n");
    scanf("%i",&Employed);

    Unemployed = Populations - Employed;

    printf("Poupulations employed: %.i\n", Employed / 100);
    printf("Poupulations unemployed: %.i\n", Unemployed / 100);

    return 0;
}