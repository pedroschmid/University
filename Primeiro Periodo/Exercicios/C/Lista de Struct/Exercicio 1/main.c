#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define T 255

typedef char STRING[T];
typedef struct tipo_data
{
    int Dia, Mes, Ano;
} DATA;

struct FUNCIONARIOS
{
    STRING Nome, Cargo;
    int qntDependentes;
    float Salario;
    DATA Aniversario;
} ;

void Menu();

int main()
{
    srand(time(NULL));

    struct FUNCIONARIOS Funcionarios[5];
    int Escolha, i, j, a, b, c;
    float mediaSalarial;


    printf("DADOS DOS FUNCIONARIOS:\n");

    for (i = 0; i < 10; i++)
    {
        printf("FUNCIONARIO %i:\n", (i + 1) );
        printf("NOME:"); scanf("\n%[^\n]", Funcionarios[i].Nome);
        printf("CARGO:"); scanf("\n%[^\n]", Funcionarios[i].Cargo);

        printf("DATA DE ANIVERSARIO:\n");
        printf("DIA:"); scanf("%i", &Funcionarios[i].Aniversario.Dia);
        printf("MES:"); scanf("%i", &Funcionarios[i].Aniversario.Mes);
        printf("ANO:"); scanf("%i", &Funcionarios[i].Aniversario.Ano);

        printf("QUANTIDADE DE DEPENDENTES:"); scanf("%i", &Funcionarios[i].qntDependentes);
        printf("SALARIO:"); scanf("%f", &Funcionarios[i].Salario);
    }

    for (j = 0; j < 10; j++)
    {
        mediaSalarial += Funcionarios[j].Salario;
    }

    mediaSalarial = (mediaSalarial / 10);

    MENU:
    Menu();
    scanf("%i", &Escolha);

    switch (Escolha)
    {
        case 1:
            for (a = 0; a < 10; a++)
            {
                if (Funcionarios[a].qntDependentes >= 2)
                    printf("FUNCIONARIO [%i] | NOME: %s | CARGO: %s | NASCIMENTO: %i/%i/%i | QUANTIDADE DE DEPENDENTES: %i | SALARIO: R$ %f\n", a, Funcionarios[a].Nome, Funcionarios[a].Cargo, Funcionarios[a].Aniversario.Dia ,Funcionarios[a].Aniversario.Mes, Funcionarios[a].Aniversario.Ano, Funcionarios[a].qntDependentes, Funcionarios[a].Salario);
            }
            break;

        case 2:
            for (b = 0; b < 10; b++)
            {
                if (Funcionarios[b].Salario >= mediaSalarial)
                    printf("FUNCIONARIO [%i] | NOME: %s | CARGO: %s | NASCIMENTO: %i/%i/%i | QUANTIDADE DE DEPENDENTES: %i | SALARIO: R$ %f\n", a, Funcionarios[a].Nome, Funcionarios[a].Cargo, Funcionarios[a].Aniversario.Dia ,Funcionarios[a].Aniversario.Mes, Funcionarios[a].Aniversario.Ano, Funcionarios[a].qntDependentes, Funcionarios[a].Salario);
            }
            break;

        case 3:
            for (c = 0; c < 10; c++)
            {
                if (Funcionarios[c].Aniversario.Mes == 2)
                    printf("FUNCIONARIO [%i] | NOME: %s | CARGO: %s | NASCIMENTO: %i/%i/%i | QUANTIDADE DE DEPENDENTES: %i | SALARIO: R$ %f\n", a, Funcionarios[a].Nome, Funcionarios[a].Cargo, Funcionarios[a].Aniversario.Dia ,Funcionarios[a].Aniversario.Mes, Funcionarios[a].Aniversario.Ano, Funcionarios[a].qntDependentes, Funcionarios[a].Salario);
            }
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
    printf("1 - EXIBIR FUNCIONARIOS COM MAIS DE DOIS DEPENDENTES\n2 - EXIBIR FUNCIONARIOS ACIMA DA MEDIA SALARIAL\n3 - FUNCIONARIOS QUE FAZEM ANIVERSARIO EM FEVEREIRO\n");
    printf("============================================================================================================================================================");
    printf("==>");
}