#include <stdio.h>
#include <stdlib.h>

int Fatorial(int N);

int main()
{
    int N, i;

    FORF:
    printf("\nINSIRA O VALOR DE N:"); scanf("%i", &N);

    if (N < 0)
        printf("NAO HA FATORIAL DE NUMERO NEGATIVO!\n");
    else
        printf("\nOS NUMEROS FATORIAIS ENTRE [0 - %i] SAO:\n", N);
        for(i = 0; i <= N; i++)
            printf("\nFATORIAL (%i): %i\n", i, Fatorial(i));

    goto FORF;

    return 0;
}

int Fatorial(int N)
{
    if(N == 0 || N == 1)
        return 1;
    else
        return N * Fatorial(N - 1);
}
