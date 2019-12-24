#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TS 255 // TOTAL STRING
#define TT 100 // TOTAL DA TURMA

typedef char STRING[TS];
typedef struct
{
    STRING nome;
    float av1, av2, mediaParcial, provaFinal, notaFinal;
    int totalFaltas;
}ALUNO;

struct TURMA
{
    ALUNO aluno;
};

void menu();

int main()
{
    struct TURMA turma[TT];
    int countFaltas = 0, couuntAprovados, escolha;
    int i, j, k, l;  // Variaveis de laço

    // Laço para calcular media
    for (i = 0; i < TT; i++)
    {
        printf("DIGITE O NOME:");               scanf("\n%[^\n]", turma[i].aluno.nome);
        printf("DIGITE A NOTA DA AV1:");        scanf("%f", &turma[i].aluno.av1);
        printf("DIGITE A NOTA DA AV2:");        scanf("%f", &turma[i].aluno.av2);
        printf("DIGITE O TOTAL DE FALTAS:");    scanf("%i", &turma[i].aluno.totalFaltas);

        // Calculando media parcial
        turma[i].aluno.mediaParcial = (turma[i].aluno.av1 + turma[i].aluno.av2) / 2;

        if (turma[i].aluno.mediaParcial < 7)
        {
            printf("DIGITE A NOTA DA PROVA FINAL:"); scanf("%f", &turma[i].aluno.provaFinal);

            // Calculando nota final (com recuperação)
            turma[i].aluno.notaFinal = (turma[i].aluno.mediaParcial < 7 + turma[i].aluno.provaFinal) / 2;
        }

        // Calculando nota final
        turma[i].aluno.notaFinal = (turma[i].aluno.av1 + turma[i].aluno.av2) / 2;
    }

    // Laço para calcular faltas
    for (j = 0; j < TT; j++)
        if (turma[j].aluno.totalFaltas >= 20)
            countFaltas++;

    // Calculando % de alunos que nao reprovaram por falta
    couuntAprovados = TT - countFaltas;

    menu:
    menu();

    scanf("%i", &escolha);

    // CLS
    system("cls");

    switch (escolha)
    {
        case 1:
            for (k = 0; k < TT; k++)
            {
                if (turma[k].aluno.notaFinal < 7)
                    printf("O ALUNO [%s] FOI REPROVADO POR ESTAR ABAIXO DA MEDIA!\n", turma[k].aluno.nome);
                else if (turma[k].aluno.totalFaltas >= 20)
                    printf("O ALUNO [%s] FOI REPROVADO POR FALTA!\n", turma[k].aluno.nome);
                else
                    printf("O ALUNO [%s] FOI APROVADO!\n", turma[k].aluno.nome);
            }
            goto menu;

        case 2:
            printf("O TOTAL DE ALUNOS QUE NAO REPROVARAM POR FALTA (EM %) FOI: %i %", couuntAprovados);
            goto menu;

        case 0:
            printf("SAINDO DO PROGRAMA...");
            break;

        default:
            printf("VOCE ESCOLHEU UMA OPCAO INVALIDA!");
            goto menu;
    }
    return 0;
}

void menu()
{
    printf("\n=================================================================\n");
    printf("1 - EXIBIR RELATORIO DA TURMA COM STATUS FINAL\n2 - EXIBIR RELATORIO DE ALUNOS QUE NAO REPROVARAM POR FALTA\n0 - SAIR DO PROGRAMA!");
    printf("=================================================================\n");
    printf("==>");
}
