#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define T 255
#define C 5

typedef char STRING[T];
typedef struct tipo_data
{
    int Dia, Mes, Ano;
} DATA;

typedef struct tempo_segundos
{
    float Natacao, Corrida, Ciclismo;
} MODALIDADES;

struct ATLETAS
{
    STRING Nome, Patrocinador;
    DATA Aniversario;
    MODALIDADES Tempo;
};

void Menu();
int bubbleSort(float Vetor[], int n);

int main() {
    struct ATLETAS Atletas[C];
    int Escolha, i, j, a, A, b, B;
    float mediaAtleta, mediaAtletaV[C];

    printf("DADOS DOS ATLETAS:\n");

    for (i = 0; i < C; i++)
    {
        printf("ATLETA %i:\n", (i + 1));
        printf("NOME:"); scanf("\n%[^\n]", Atletas[i].Nome);
        printf("PATROCINADOR:"); scanf("\n%[^\n]", Atletas[i].Patrocinador);

        printf("DATA DE ANIVERSARIO:\n");
        printf("DIA:"); scanf("%i", &Atletas[i].Aniversario.Dia);
        printf("MES:"); scanf("%i", &Atletas[i].Aniversario.Mes);
        printf("ANO:"); scanf("%i", &Atletas[i].Aniversario.Ano);

        printf("TEMPO (SEGUNDOS) EM CADA MODALIDADE:\n");
        printf("NATACAO:"); scanf("%f", &Atletas[i].Tempo.Natacao);
        printf("CORRIDA:"); scanf("%f", &Atletas[i].Tempo.Corrida);
        printf("CICLISMO:"); scanf("%f", &Atletas[i].Tempo.Ciclismo);
    }

    for (j = 0; j < C; j++)
    {
        mediaAtleta += Atletas[j].Tempo.Natacao + Atletas[j].Tempo.Corrida + Atletas[j].Tempo.Ciclismo;
    }

    // Media total
    mediaAtleta = mediaAtleta / C;

    MENU:
    Menu();
    scanf("%i", &Escolha);

    switch (Escolha)
    {
        case 1:
            for (a = 0; a < C; a++)
            {
                mediaAtletaV[a] += Atletas[a].Tempo.Natacao + Atletas[a].Tempo.Corrida + Atletas[a].Tempo.Ciclismo / C;
                for (A = 0; A < C; A++)
                {
                    if (mediaAtletaV[A] >= mediaAtleta)
                        printf("ATLETA [%i] | NOME: %s", A, Atletas[A].Nome);
                }
            }
            break;

        case 2:
            for (b = 0; b < C; b++)
            {
                mediaAtletaV[b] += Atletas[b].Tempo.Natacao + Atletas[b].Tempo.Corrida + Atletas[b].Tempo.Ciclismo / C;
            }
            printf("ATLETA [%d] | NOME: %s | PATROCINADOR: %s", bubbleSort(mediaAtletaV, C), Atletas[bubbleSort(mediaAtletaV, C)].Nome, Atletas[bubbleSort(mediaAtletaV, C)].Patrocinador);
            break;

        default:
            printf("ESCOLHA INVALIDA!!");
            goto MENU;
    }
    return 0;
}

void Menu()
{
    printf("============================================================================================================================================================");
    printf("1 - EXIBIR TRIATLETAS COM OS MELHORES TEMPOS\n2 - EXIBIR NOME E PATROCINADOR DO MELHOR ATLETA\n");
    printf("============================================================================================================================================================");
    printf("==>");
}

int bubbleSort(float Vetor[], int n)
{
    int i = 0, j = 0, aux = 0;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (Vetor[j] > Vetor[j + 1])
            {
                aux = Vetor[j];
                Vetor[j] = Vetor[j + 1];
                Vetor[j + 1] = aux;
            }
        }
    }
    return aux;
}
