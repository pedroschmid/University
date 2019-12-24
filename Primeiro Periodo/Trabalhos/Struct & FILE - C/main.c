    /*
        Nome
        Sexo
        IMC
        Frequencia anual (ano passado)
        Estado civíl
    */

    // Bibliotecas
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <locale.h>
    #include <conio.h>

    // Defines
    #define T 255 // Tamanho da string
    #define TS 10 // Tamanho do struct

    // Typedefs
    typedef char STRING[T];

    // Structs
    struct PESSOAS
    {
        STRING Nome, Sexo, estadoCivil, frequenciaAnual, IMC;
    };

    // Prototipos
    // Ler/Exibir
    void lerArquivo(FILE* arquivo, struct PESSOAS Pessoas[TS]); // Lê o txt
    void exibirArquivo(struct PESSOAS Pessoas[TS]); // Printa a struct
    void exibirStructN(struct PESSOAS Pessoas[TS], int index); // Printa a struct com um index especifico

    // Ordenar
    void ordenarPessoasNome(struct PESSOAS Pessoas[TS]); // Ordena o struct em ordem alfabetica
    void ordenarPessoasSexoMasculino(struct PESSOAS Pessoas[TS]); // Ordena o struct em ordem masculina
    void ordenarPessoasSexoFeminino(struct PESSOAS Pessoas[TS]); // Ordena o struct em ordem feminina
    void ordenarPessoasEstadoCivilSolteiro(struct PESSOAS Pessoas[TS]); // Ordena o struct em ordem de solteiros
    void ordenarPessoasEstadoCivilCasado(struct PESSOAS Pessoas[TS]); // Ordena o struct em ordem de casados
    void ordenarPessoasIMC(struct PESSOAS Pessoas[TS]); // Ordena o struct por IMC (em ordem crescente)
    void ordenarPessoasFrequenciaAnual(struct PESSOAS Pessoas[TS]); // Ordena o struct por frequencia anual (em ordem crescente)

    // Pesquisar
    int pesquisaBinariaIMC(struct PESSOAS Pessoas[TS], int low, int high, float element);
    int pesquisaBinariaFrequenciaAnual(struct PESSOAS Pessoas[TS], int low, int high, float element);

    // Gravar
    int gravarArquivo (struct PESSOAS Pessoas[TS], int numPessoas);

    // Menus
    void menuPrincipal();
    void menuOrdenacao();
    void menuBusca();

    // Main
    int main()
    {
        // Definindo a struct
        struct PESSOAS Pessoas[TS];

        // FILE de leitura
        FILE* arquivo = fopen("C:\\DevC\\Trabalho\\TxT\\DADOS.txt", "r");

        int escolhaMenuPrincipal, escolhaMenuOrdenacao, escolhaMenuPesquisa, pesquisaBinaria, respostaPesquisa, respostaGravar, Flag;
        float Pesquisa;

        menuPrincipal: // GOTO

        menuPrincipal();
        scanf("%i", &escolhaMenuPrincipal);

        printf("\n"); // ' '

        // Switch do menu principal
        switch (escolhaMenuPrincipal)
        {
            case 1: // Case de ler o txt e fechar o arquivo
                lerArquivo(arquivo, Pessoas); // Lendo txt e atribuindo dados na struct
                printf("TXT LIDO COM SUCESSO!\n");
                goto menuPrincipal;

            case 2:
                exibirArquivo(Pessoas);
                goto menuPrincipal;

            case 3: // Case de exibir o menu de ordenação do struct
                menuOrdenacao: // GOTO
                menuOrdenacao();
                scanf("%i", &escolhaMenuOrdenacao);

                printf("\n"); // ' '

                // Switch do menu de ordenação
                switch (escolhaMenuOrdenacao)
                {
                    case 1:
                        ordenarPessoasNome(Pessoas);
                        goto menuOrdenacao;

                    case 2:
                        ordenarPessoasSexoMasculino(Pessoas);
                        goto menuOrdenacao;

                    case 3:
                        ordenarPessoasSexoFeminino(Pessoas);
                        goto menuOrdenacao;

                    case 4:
                        ordenarPessoasEstadoCivilSolteiro(Pessoas);
                        goto menuOrdenacao;

                    case 5:
                        ordenarPessoasEstadoCivilCasado(Pessoas);
                        goto menuOrdenacao;

                    case 6:
                        ordenarPessoasIMC(Pessoas);
                        goto menuOrdenacao;

                    case 7:
                        ordenarPessoasFrequenciaAnual(Pessoas);
                        goto menuOrdenacao;

                    case 0:
                        printf("SAINDO DO MENU DE ORDENACAO...\n");
                        goto menuPrincipal;

                    default:
                        printf("ESCOLHA INVALIDA, TENTE NOVAMENTE!\n");
                        goto menuOrdenacao;
                }

            case 4: // Case de pesquisas (binaria e sequencial)
                menuBusca:
                menuBusca();
                scanf("%i", &escolhaMenuPesquisa);

                printf("\n"); // ' '

                switch (escolhaMenuPesquisa)
                {
                    case 1: // Pesquisa binaria por IMC
                        printf("DIGITE O IMC QUE DESEJA BUSCAR:"); scanf("%f", &Pesquisa);

                        pesquisaBinaria = pesquisaBinariaIMC(Pessoas, 0, TS,Pesquisa);

                        if (pesquisaBinaria >= 0)
                        {
                            printf("\nO IMC [%.1f] FOI ENCONTRADO NO INDICE [%i]!\n", Pesquisa, pesquisaBinaria+1);
                            printf("\nDESEJA LISTAR TODOS OS DADOS?\n[1] - SIM\n[2] - NAO\n\n");
                            printf("RESPOSTA ==>"); scanf("%i", &respostaPesquisa);

                            printf("\n"); // ' '

                            if (respostaPesquisa == 1)
                                exibirStructN(Pessoas, pesquisaBinaria);
                        }
                        else
                            printf("O IMC [%f] NAO FOI ENCONTRADO\n", Pesquisa);
                        goto menuBusca;

                    case 2: // Pesquisa binaria por Frequencia Anual
                        printf("DIGITE A FREQUENCIA ANUAL QUE DESEJA BUSCAR:"); scanf("%f", &Pesquisa);

                        pesquisaBinaria = pesquisaBinariaFrequenciaAnual(Pessoas, 0, TS,Pesquisa);

                        if (pesquisaBinaria >= 0)
                        {
                            printf("\nA FREQUENCIA ANUAL [%.1f] FOI ENCONTRADA NO INDICE [%i]!\n", Pesquisa, pesquisaBinaria+1);
                            printf("\nDESEJA LISTAR TODOS OS DADOS?\n[1] - SIM\n[2] - NAO\n");
                            printf("RESPOSTA ==>"); scanf("%i", &respostaPesquisa);

                            printf("\n"); // ' '

                            if (respostaPesquisa == 1)
                                exibirStructN(Pessoas, pesquisaBinaria);
                        }
                        else
                            printf("A FREQUENCIA ANUAL [%f] NAO FOI ENCONTRADA!\n", Pesquisa);
                        goto menuBusca;

                    case 0:
                        printf("SAINDO DO MENU DE PESQUISA...\n");
                        goto menuPrincipal;

                    default:
                        printf("ESCOLHA INVALIDA, TENTE NOVAMENTE!\n");
                        goto menuBusca;
                }

            case 5: // Case para criar e salvar struct em um novo txt
                gravarArquivo(Pessoas, TS); // Função que grava o arquivo

                if (gravarArquivo(Pessoas, TS) == 1)
                    printf("O ARQUIVO FOI GRAVADO COM SUCESSO!\n");
                goto menuPrincipal;

            case 0: // Case para sair do programa
                printf("SAINDO DO PROGRAMA...\n");
                break;

            default: // Default nigga
                printf("ESCOLHA INVALIDA, TENTE NOVAMENTE!\n");
                goto menuPrincipal;
        }
        return 0;
    }

    // Menu principal
    void menuPrincipal()
    {
        printf("\n|================================================================|\n");
        printf("| [1] - LER TXT                                                  |\n");
        printf("| [2] - EXIBIR TXT                                               |\n");
        printf("| [3] - MENU DE ORDENACAO                                        |\n");
        printf("| [4] - PESQUISAR NO STRUCT                                      |\n");
        printf("| [5] - GRAVAR A STRUCT ATUAL                                    |\n");
        printf("| [0] - SAIR DO PROGRAMA                                         |\n");
        printf("|================================================================|\n");
        printf("\nRESPOSTA ==>");
    }

    // Menu de ordenação
    void menuOrdenacao()
    {
        printf("\n|================================================================|\n");
        printf("| [1] - ORDENAR POR NOME                                         |\n");
        printf("| [2] - ORDENAR POR SEXO (MASCULINO)                             |\n");
        printf("| [3] - ORDENAR POR SEXO (FEMININO)                              |\n");
        printf("| [4] - ORDENAR POR ESTADO CIVIL (SOLTEIRO)                      |\n");
        printf("| [5] - ORDENAR POR ESTADO CIVIL (CASADO)                        |\n");
        printf("| [6] - ORDENAR POR IMC                                          |\n");
        printf("| [7] - ORDENAR POR FREQUENCIA ANUAL                             |\n");
        printf("| [0] - SAIR DO SWITCH DE ORDENACAO                              |\n");
        printf("|================================================================|\n");
        printf("\nRESPOSTA ==>");
    }

    void menuBusca()
    {
        printf("\n|================================================================|\n");
        printf("| [1] - BUSCA BINARIA POR IMC                                    |\n");
        printf("| [2] - BUSCA BINARIA POR FREQUENCIA ANUAL                       |\n");
        printf("| [0] - SAIR DO SWITCH DE PESQUISA                               |\n");
        printf("|================================================================|\n");
        printf("\nRESPOSTA ==>");
    }

    // Função para ler arquivo
    void lerArquivo(FILE* arquivo, struct PESSOAS Pessoas[TS])
    {
        int i;

        if (arquivo == NULL)
            printf("ERRO AO ABRIR ARQUIVO!");
        else
        {
            i = 0; // reset i

            while (!feof(arquivo))
            {
                fgets(Pessoas[i].Nome, 255, arquivo);
                fgets(Pessoas[i].Sexo, 255, arquivo);
                fgets(Pessoas[i].IMC, 255, arquivo);
                fgets(Pessoas[i].frequenciaAnual, 255, arquivo);
                fgets(Pessoas[i].estadoCivil, 255, arquivo);

                i++; // i++ bitches
            }
        }

        fclose(arquivo);
    }

    // Função para exibir o struct
    void exibirArquivo(struct PESSOAS Pessoas[TS])
    {
        int i;

        for (i = 0; i < TS; i++) {
            printf("ID: [%i]\n", (i + 1));
            printf("NOME: %s", Pessoas[i].Nome);
            printf("SEXO: %s", Pessoas[i].Sexo);
            printf("IMC: %s", Pessoas[i].IMC);
            printf("FREQUENCIA ANUAL: %s", Pessoas[i].frequenciaAnual);
            printf("ESTADO CIVIL: %s", Pessoas[i].estadoCivil);
            printf("\n");
        }
    }

    // Função para exibir o struct (com um indice especifico)
    void exibirStructN(struct PESSOAS Pessoas[TS], int index)
    {

        printf("ID: [%i]\n", index+1);
        printf("NOME: %s", Pessoas[index].Nome);
        printf("SEXO: %s", Pessoas[index].Sexo);
        printf("IMC: %s", Pessoas[index].IMC);
        printf("FREQUENCIA ANUAL: %s", Pessoas[index].frequenciaAnual);
        printf("ESTADO CIVIL: %s", Pessoas[index].estadoCivil);
        printf("\n");
    }

    // Função para ordenar pessoas por nome (Ordem alfabetica)
    void ordenarPessoasNome(struct PESSOAS Pessoas[TS])
    {
        int i, j, compararStrings;
        struct PESSOAS aux;

        for (i = 0; i < TS; i++)
        {
            for (j = i + 1; j < TS; j++)
            {
                compararStrings = strcmp(Pessoas[i].Nome, Pessoas[j].Nome);
                if (compararStrings > 0)
                {
                    aux = Pessoas[i];
                    Pessoas[i] = Pessoas[j];
                    Pessoas[j] = aux;
                }
            }
        }

        exibirArquivo(Pessoas);
    }

    // Função para ordenar pessoas por sexo (Masculino > )
    void ordenarPessoasSexoMasculino(struct PESSOAS Pessoas[TS])
    {
        int i, j, compararStrings;
        struct PESSOAS aux;

        for (i = 0; i < TS; i++)
        {
            for (j = i + 1; j < TS; j++)
            {
                compararStrings = strcmp(Pessoas[i].Sexo, Pessoas[j].Sexo);
                if (compararStrings <= 0)
                {
                    aux = Pessoas[i];
                    Pessoas[i] = Pessoas[j];
                    Pessoas[j] = aux;
                }
            }
        }

        exibirArquivo(Pessoas);
    }

    // Função para ordenar pessoas por sexo (Feminino > )
    void ordenarPessoasSexoFeminino(struct PESSOAS Pessoas[TS])
    {
        int i, j, compararStrings;
        struct PESSOAS aux;

        for (i = 0; i < TS; i++)
        {
            for (j = i + 1; j < TS; j++)
            {
                compararStrings = strcmp(Pessoas[i].Sexo, Pessoas[j].Sexo);
                if (compararStrings > 0)
                {
                    aux = Pessoas[i];
                    Pessoas[i] = Pessoas[j];
                    Pessoas[j] = aux;
                }
            }
        }

        exibirArquivo(Pessoas);
    }

    // Função para ordenar pessoas por estado civil (Solteiro)
    void ordenarPessoasEstadoCivilSolteiro(struct PESSOAS Pessoas[TS])
    {
        int i, j, compararStrings;
        struct PESSOAS aux;

        for (i = 0; i < TS; i++)
        {
            for (j = i + 1; j < TS; j++)
            {
                compararStrings = strcmp(Pessoas[i].estadoCivil, Pessoas[j].estadoCivil);
                if (compararStrings <= 0)
                {
                    aux = Pessoas[i];
                    Pessoas[i] = Pessoas[j];
                    Pessoas[j] = aux;
                }
            }
        }

        exibirArquivo(Pessoas);
    }

    // Função para ordenar pessoas por estado civil (Casado)
    void ordenarPessoasEstadoCivilCasado(struct PESSOAS Pessoas[TS])
    {
        int i, j, compararStrings;
        struct PESSOAS aux;

        for (i = 0; i < TS; i++)
        {
            for (j = i + 1; j < TS; j++)
            {
                compararStrings = strcmp(Pessoas[i].estadoCivil, Pessoas[j].estadoCivil);
                if (compararStrings > 0)
                {
                    aux = Pessoas[i];
                    Pessoas[i] = Pessoas[j];
                    Pessoas[j] = aux;
                }
            }
        }

        exibirArquivo(Pessoas);
    }

    // Função para ordenar pessoas por IMC (ordem crescente)
    void ordenarPessoasIMC(struct PESSOAS Pessoas[TS])
    {
        int i, j;
        struct PESSOAS aux;

        for (i = 0; i < TS; i++)
        {
            for (j = 0; j < (TS - 1); j++)
            {
                if ( strtof(Pessoas[j].IMC, NULL) > strtof(Pessoas[j + 1].IMC, NULL) )
                {
                    aux = Pessoas[j];
                    Pessoas[j] = Pessoas[j + 1];
                    Pessoas[j + 1] = aux;
                }
            }
        }

        exibirArquivo(Pessoas);
    }

    // Função para odernar pessoas por frequencia anual (ordem crescente)
    void ordenarPessoasFrequenciaAnual(struct PESSOAS Pessoas[TS])
    {
        int i, j;
        struct PESSOAS aux;

        for (i = 0; i < TS; i++)
        {
            for (j = 0; j < (TS - 1); j++)
            {
                if ( strtof(Pessoas[j].frequenciaAnual, NULL) > strtof(Pessoas[j + 1].frequenciaAnual, NULL) )
                {
                    aux = Pessoas[j];
                    Pessoas[j] = Pessoas[j + 1];
                    Pessoas[j + 1] = aux;
                }
            }
        }

        exibirArquivo(Pessoas);
    }

    // Função para pesquisa binaria (por IMC)
    int pesquisaBinariaIMC(struct PESSOAS Pessoas[TS], int low, int high, float element)
    {
        int middle;
        while (low <= high)
        {
            middle = low + (high - low)/2;
            if (element > strtof(Pessoas[middle].IMC, NULL))
                low = middle + 1;
            else if (element < strtof(Pessoas[middle].IMC, NULL) )
                high = middle - 1;
            else
                return middle;
        }
        return -1;
    }

    // Função para pesquisa binaria (por Frequencia Anual)
    int pesquisaBinariaFrequenciaAnual(struct PESSOAS Pessoas[TS], int low, int high, float element)
    {
        int middle;
        while (low <= high)
        {
            middle = low + (high - low)/2;
            if (element > strtof(Pessoas[middle].frequenciaAnual, NULL))
                low = middle + 1;
            else if (element < strtof(Pessoas[middle].frequenciaAnual, NULL) )
                high = middle - 1;
            else
                return middle;
        }
        return -1;
    }

    // Função para gravar a struct em um txt
    int gravarArquivo (struct PESSOAS Pessoas[TS], int numPessoas)
    {
        FILE *output = fopen("C:\\DevC\\Trabalho\\TxT\\SAIDA.TXT", "w"); // Abre o arquivo para escrever

        if (!output) {
            return -1; // Erro
        }
        for (int i = 0; i < numPessoas; ++i) {
            fprintf(output, "%s%s%s%s%s", Pessoas[i].Nome,Pessoas[i].Sexo, Pessoas[i].IMC, Pessoas[i].frequenciaAnual, Pessoas[i].estadoCivil);
        }
        fclose(output); // Fecha o arquivo
        return 1;
    }