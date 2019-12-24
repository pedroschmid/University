#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 255
#define CORRENTISTAS 2

typedef char STRING[T];
typedef struct
{
    float saldoJan, saldoFev, saldoMar, saldoAbr, saldoMai, saldoJun, saldoJul, saldoAgo, saldoSet, saldoOut, saldoNov, saldoDez;
}SALDO;

struct BANCO
{
    STRING nome, conta;
    SALDO saldo;
    float somaSaldos;
};

void menu();

int main()
{
    struct BANCO banco[CORRENTISTAS];
    int i, j, J, k, escolha;
    float maiorSaldo = 0, lucroAcionistas = 0;

    // Cadastro das contas
    for (i = 0; i < CORRENTISTAS; i++)
    {
        printf("DIGITE O NOME:"); scanf("\n%[^\n]", banco[i].nome);
        printf("DIGITE A CONTA:"); scanf("\n%[^\n]", banco[i].conta);

        printf("DIGITE O SALDO DE JANEIRO:");   scanf("%f", &banco[i].saldo.saldoJan);
        printf("DIGITE O SALDO DE FEVEREIRO:"); scanf("%f", &banco[i].saldo.saldoFev);
        printf("DIGITE O SALDO DE MARCO:");     scanf("%f", &banco[i].saldo.saldoMar);
        printf("DIGITE O SALDO DE ABRIL:");     scanf("%f", &banco[i].saldo.saldoAbr);
        printf("DIGITE O SALDO DE MAIO:");      scanf("%f", &banco[i].saldo.saldoMai);
        printf("DIGITE O SALDO DE JUNHO:");     scanf("%f", &banco[i].saldo.saldoJun);
        printf("DIGITE O SALDO DE JULHO:");     scanf("%f", &banco[i].saldo.saldoJul);
        printf("DIGITE O SALDO DE AGOSTO:");    scanf("%f", &banco[i].saldo.saldoAgo);
        printf("DIGITE O SALDO DE SETEMBRO:");  scanf("%f", &banco[i].saldo.saldoSet);
        printf("DIGITE O SALDO DE OUTUBRO:");   scanf("%f", &banco[i].saldo.saldoOut);
        printf("DIGITE O SALDO DE NOVEMBRO:");  scanf("%f", &banco[i].saldo.saldoNov);
        printf("DIGITE O SALDO DE DEZEMBRO:");  scanf("%f", &banco[i].saldo.saldoDez);

        printf("\nCORRENTISTA [%i] CADASTRADO COM SUCESSO!!\n", i);

        // Soma dos saldos de cada mes
        banco[i].somaSaldos =
                ( banco[i].saldo.saldoJan + banco[i].saldo.saldoFev + banco[i].saldo.saldoMar + banco[i].saldo.saldoAbr + banco[i].saldo.saldoMai + banco[i].saldo.saldoJun +
                banco[i].saldo.saldoJul + banco[i].saldo.saldoAgo + banco[i].saldo.saldoSet + banco[i].saldo.saldoOut + banco[i].saldo.saldoNov + banco[i].saldo.saldoDez );
    }

    // Pegar o maior saldo do vetor
    for (j = 0; j < CORRENTISTAS; j++)
    {
        if (j == 0)
            maiorSaldo = banco[j].somaSaldos;

        if (banco[j].somaSaldos > maiorSaldo)
        {
            maiorSaldo = banco[j].somaSaldos;
            J = j;
        }


    }

    // Calcular lucro dos acionistas ( 7% )
    for (k = 0; k < CORRENTISTAS; k++)
        lucroAcionistas += banco[k].somaSaldos;

    lucroAcionistas *= 0.07; // 7%

    menu:
    menu();

    scanf("%i", &escolha);

    // CLS
    system("cls");

    switch (escolha)
    {
        case 1:
            printf("O CORRENTISTA QUE OBTEVE A MAIOR MOVIMENTACAO ANUAL FOI: %s | %s", banco[J].nome, banco[J].conta);
            goto menu;

        case 2:
            for (i = 0; i < CORRENTISTAS; i++)
                printf("A MOVIMENTACAO ANUAL DO CORRENTISTA [%i] FOI: %.2f\n", i, banco[i].somaSaldos);
            goto menu;

        case 3:
            printf("O LUCRO ANUAL DOS ACIONISTAS FOI: %.2f", lucroAcionistas);
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
    printf("1 - EXIBIR NOME E CONTA QUE OBTEVE MAIOR MOVIMENTAÇÃO ANUAL\n2 - EXIBIR RELATORIO FINANCEIRO DE TODOS OS CORRENTISTAS\n3 - EXIBIR LUCRO TOTAL DOS CORRENTISTAS (7%)\n0 - SAIR DO PROGRAMA!");
    printf("=================================================================\n");
    printf("==>");
}
