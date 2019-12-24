#include <stdio.h>

#define T 255

void Bolha(int Vetor[T])
{
    int i, Trocou, Auxiliar;
    int Ls = T - 1;
    do
    {
        Trocou = 0;
        for (i = 0; i < Ls; i++)
        {
            Auxiliar = Vetor[i];
            Vetor[i] = Vetor[i + 1];
            Vetor[i + 1] = Auxiliar;
            Trocou = 1;
        }
        Ls--;
    } while (Trocou);
}

int pesquisaSequencial(int Vetor[T], int Procurado)
{
    int i = 0; // INDICE DE INICIO DO VALOR
    int Saida = -1; // INDICE PARA VALOR NAO ENCONTRADO NO VETOR
    while(i < T && Saida == -1)
    {
        if(Vetor[i] == Procurado)
            Saida = 1; // INDICE DO VALOR PROCURADO PELO USUARIO
        else
            i++;
    }
    return Saida;
}

int pesquisaBinaria(int Vetor[T], int Procurado)
{
    int Saida = -1;           // INDICE PARA O ELEMENTO NAO ENCOTRADO
    int Li = 0;              // LI: LIMITE INFERIOR DO VETOR
    int Ls = T - 1;         // LS: LIMITE SUPERIOR DO VETOR
    int Meio;              // LS



    while ()
    {
        if (Vetor[Meio] == Procurado)
            Saida = Meio;
        else if (Vetor[Meio] > Procurado)
            Ls = Meio - 1;
        else
            Li = Meio + 1;
    }

    return Saida;
}

int main()
{
    int Vetor[T] = {5, 10, 15, 20, 30}, numeroProcurado, Saida;

    printf("DIGITE O NUMERO QUE DESEJA PROCURAR:");
    scanf("%d", &numeroProcurado);

    Saida = pesquisaSequencial(Vetor, numeroProcurado);

    if (Saida == -1)
        printf("O VALOR PROCURADO: [%d] NAO FOI ENCOTRADO!\n", numeroProcurado);
    else
        printf("O VALOR [%d] FOI ENCONTRADO NO INDICE [%d]!\n", numeroProcurado, Saida);
    return 0;
}