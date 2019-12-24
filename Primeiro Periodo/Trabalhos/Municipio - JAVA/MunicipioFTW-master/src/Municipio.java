import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Municipio {
    // Criando atributos
        private String Matricula;
        private String Nome;
        private float Imposto;
        private int mesesAtraso;

    // Criando map de matriculas
        Map<String, String> listaMatricula = new HashMap<String, String>();

    // Criando Scanner
        Scanner scannerInt = new Scanner(System.in);
        Scanner scannerFloat = new Scanner(System.in);
        Scanner scannerString = new Scanner(System.in);

    // Criando variaveis
        int escolhaIF = 0;
        int escolhaDoWhile = 0;
        int paradaDoWhile = 0;
        int i = 1;


    // Get and Setters
        // Matricula
            public String getMatricula() {
                return Matricula;
            }

            public void setMatricula(String matricula) {
                this.Matricula = matricula;
            }

        // Nome
            public String getNome() {
                return Nome;
            }

            public void setNome(String nome) {
                this.Nome = nome;
            }

        // Imposto
            public float getImposto() {
                return Imposto;
            }

            public void setImposto(float imposto) {
                this.Imposto = imposto;
            }

        // mesesAtraso
            public int getMesesAtraso() {
                return mesesAtraso;
            }

            public void setMesesAtraso(int mesesAtraso) {
                this.mesesAtraso = mesesAtraso;
            }

    // Metodos

    // Metodo ASC II
        public void Asc(){
            System.out.println("                              ______________                               \n" +
                    "                        ,===:'.,            `-._                           \n" +
                    "                             `:.`---.__         `-._                       \n" +
                    "                              `:.     `--.         `.                     \n" +
                    "                                 \\.        `.         `.                   \n" +
                    "                         (,,(,    \\.         `.   ____,-`.,                \n" +
                    "                      (,'     `/   \\.   ,--.___`.'                         \n" +
                    "                  ,  ,'  ,--.  `,   \\.;'         `                         \n" +
                    "                   `{D, {    \\  :    \\;                                    \n" +
                    "                     V,,'    /  /    //                                    \n" +
                    "                     j;;    /  ,' ,-//.    ,---.      ,                    \n" +
                    "                     \\;'   /  ,' /  _  \\  /  _  \\   ,'/                    \n" +
                    "                           \\   `'  / \\  `'  / \\  `.' /                     \n" +
                    "                            `.___,'   `.__,'   `.__,'    ");

            System.out.println(" ");
            // Apresentação da criação de matriculas
                System.out.println("========================================================================================");
                System.out.println("BEM VINDO AO DRAGONICIPIO!, INSIRA OS DADOS PEDIDO LOGO ABAIXO PARA CRIAR AS MATRICULAS.");
                System.out.println(" ");
        }

    // Metodo para calcular multa
        public void calcularMulta() {
            // IF/ELSE para calcular a multa
                if (mesesAtraso > 0 && mesesAtraso <= 5) {
                    Imposto = Imposto + (float) (Imposto * 0.01);
                } else if (mesesAtraso >= 6 && mesesAtraso <= 8) {
                    Imposto = Imposto + (float) (Imposto * 0.023);
                } else if (mesesAtraso >= 9 && mesesAtraso <= 10) {
                    Imposto = Imposto + (float) (Imposto * 0.03);
                } else if (mesesAtraso >= 11 && mesesAtraso <= 12) {
                    Imposto = Imposto + (float) (Imposto * 0.054);
                } else {
                    Imposto = Imposto + (float) (Imposto * 0.1);
                }
        }

    // Metodo Do Whille para inserir municipios
        public void inserirDoWhile(){
            System.out.print("INSIRA A MATRICULA: ");
                String Matricula = scannerString.nextLine();
            System.out.print("INSIRA O NOME: ");
                String Nome = scannerString.nextLine();
            System.out.print("INSIRA O IMPOSTO: ");
                float Imposto = scannerFloat.nextFloat();
            System.out.print("INSIRA OS MESES EM ATRASO: ");
                int mesesAtraso = scannerInt.nextInt();
            System.out.println("");

            // Setando as variaveis
                this.setMatricula(Matricula);
                this.setNome(Nome);
                this.setImposto(Imposto);
                this.setMesesAtraso(mesesAtraso);

        // Laço para criar varios cadastros
            do {
                // Invocando metodo de calcular multa
                    calcularMulta();
                // Adicionando a matricula criada no hashMap
                    listaMatricula.put(getMatricula(), getNome());
                        System.out.println("O VALOR A SER PAGO É: " + getImposto());
                        System.out.println("");
                        System.out.println("Cadastro [" + i + "] efetuado com sucesso!\n");
                // Contador que indica o indice da matricula criada e credsce a cada matricula
                    i++;
                        System.out.println("Deseja efetuar um novo cadastro?\n1 - SIM\n2 - NÃO");
                        System.out.print("===>");
                        escolhaDoWhile = scannerInt.nextInt();
                        System.out.println("");
            } while (escolhaDoWhile != 2);
        }

    // Metodo Do While para listar municipios
        public void listarDoWhile(){
            do {
                // Pergunta ao usuario qual tipo de busca ele quer fazer
                    System.out.println("1 - EXIBIR MATRICULA\n2 - EXIBIR MATRICULA E NOME\n0 - FINALIZAR BUSCA");
                    System.out.print("===>");
                    escolhaIF = scannerInt.nextInt();
                // IF/ELSE para escolher o tipo de READ
                    if (escolhaIF == 1) {
                        for (Map.Entry<String, String> entry : listaMatricula.entrySet()) {
                            System.out.println("MATRICULA: " + entry.getKey());
                        }
                    } else if (escolhaIF == 2) {
                        for (Map.Entry<String, String> entry : listaMatricula.entrySet()) {
                            System.out.println("MATRICULA: " + entry.getKey() + " | NOME: " + entry.getValue());
                        }
                    }
            } while (escolhaIF != 0);
        }

    // Metodo para cadastrar os municipios e exibir os mesmos
        public void todoMethod() {
            Asc();
            // Laço para rodar o main method novamente
                do {
                    // Laço para o insert
                        inserirDoWhile();
                    // Laço para o list
                        listarDoWhile();
                    // Pergunta ao usuario se deseja cadastrar mais municipios ou sair do programa
                        System.out.println("Deseja começar novamente?\n1 - SIM\n0 - NÃO");
                            paradaDoWhile = scannerInt.nextInt();
                    // Condição para cadastrar novos municipios ou encerrar o programa
                        if (paradaDoWhile == 0){
                            System.out.println("OBRIGADO POR USAR O DRAGONICIPIO!\n");
                        } else {
                            todoMethod();
                        }
                } while (paradaDoWhile != 0);
        }

}
