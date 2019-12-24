#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define T 255
#define POLTRONA 44

typedef char STRING[T];
typedef struct
{
    STRING nome, sexo;
    int idade;
} PASSAGEIRO;

struct ONIBUS
{
    int poltrona, poltronaOcupada;
    STRING origem, destino;
    PASSAGEIRO passageiro;
};

void menu();

int main()
{
    struct ONIBUS onibus[POLTRONA];
    int i, k, escolha, escolhaRegistro, countFeminino = 0;

    // laço para settar o valor das poltronas em 0;
    for (i = 0; i < POLTRONA; i++)
        onibus[i].poltronaOcupada = 0;

    // GOTO para mostrar o menu pro usuario novamente
    menu:
    menu();

    scanf("%i", &escolha);

    // CLS
    system("cls");

    switch (escolha)
    {
        case 1:
        cadeiraInvalida: // GOTO caso a cadeira que o usuario escolheu ja esteja em uso
            printf("DIGITE A CADEIRA QUE DESEJA RESERVAR:"); scanf("%i", &onibus->poltrona);

            int polIndex = onibus->poltrona;

            // Laço para testar se a poltrona que o usuario escolheu esta vazia
            if (onibus[polIndex].poltronaOcupada == 0)
            {
                printf("\nA POLTRONA [%i] ESTA VAZIA, PARA PROSSEGUIR COM A COMPRA, INSIRA SEUS DADOS!\n", onibus[polIndex].poltrona);

                // Preenchendo os outros dados.
                printf("DIGITE SEU NOME:"); scanf("\n%[^\n]", onibus[polIndex].passageiro.nome);
                printf("DIGITE SEU SEXO (M/F):"); scanf("\n%[^\n]", onibus[polIndex].passageiro.sexo);
                printf("DIGITE SUA IDADE:"); scanf("%i", &onibus[polIndex].passageiro.idade);
                printf("DIGITE SUA ORIGEM:"); scanf("\n%[^\n]", onibus[polIndex].origem);
                printf("DIGITE SEU DESTINO:"); scanf("\n%[^\n]", onibus[polIndex].destino);

                // Confirma que a proltrona escolhida pelo usuario estava livre e altera o valor da mesma para '1'
                onibus[polIndex].poltronaOcupada = 1;

                printf("\nA POLTRONA [%i] FOI RESERVADA COM SUCESSO!\n", onibus[polIndex].poltrona);

                goto menu; // GOTO
            }
            else
            {
                printf("\nA POLTRONA [%i] JA ESTA RESERVADA, POR FAVOR ESCOLHA OUTRA!", onibus[polIndex].poltrona);

                goto cadeiraInvalida; // GOTO
            }

        case 2:
            printf("DIGITE O NUMERO DA POLTRONA QUE DESEJA VER:"); scanf("%i", &escolhaRegistro);
            printf("POLTRONA: %i | NOME: %s | SEXO: %s | IDADE: %i | ORIGEM: %s | DESTINO: %s\n",onibus[escolhaRegistro].poltrona, onibus[escolhaRegistro].passageiro.nome, onibus[escolhaRegistro].passageiro.sexo, onibus[escolhaRegistro].passageiro.idade, onibus[escolhaRegistro].origem, onibus[escolhaRegistro].destino);

            goto menu; // GOTO

        case 3:
            for (k = 0; k < POLTRONA; k++)
                if ( strcmp(onibus[k].passageiro.sexo, 'f') == 0 || strcmp(onibus[k].passageiro.sexo, 'F') == 0 )
                    countFeminino++;

            printf("O TOTAL DE PASSAGEIROS(A) DO SEXO FEMINONO FORAM: %i", countFeminino);

            goto menu; // GOTO

        default:
            printf("VOCE ESCOLHEU UMA OPCAO DE MENU INVALIDA, TENTE NOVAMENTE!\n");
            break;
    }

    return 0;
}

void menu()
{
    printf("\n=================================================================\n");
    printf("1 - CADASTRAR UMA POLTRONA\n2 - EXIBIR UM REGISTRO\n3 - EXIBIR TOTAL DE PASSAGEIROS FEMININOS\n");
    printf("=================================================================\n");
    printf("==>");
}