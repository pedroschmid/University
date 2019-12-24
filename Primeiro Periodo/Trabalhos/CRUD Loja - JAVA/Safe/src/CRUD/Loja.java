import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Scanner;

public class Loja {

    // Listas da classe main
        public static List<questao2.Pedido> listaPedidos = new ArrayList<>();
        public static List<questao2.Cliente> listaClientes = new ArrayList<>();

    public static void main(String[] args) {
        // Criando objetos
            Scanner input = new Scanner(System.in);
            Date Data = new Date();
            questao2.Pedido objPedido = new questao2.Pedido(1, "Data: xx/xx/xxxx");
            Cliente auxCliente;
            ItemPedido auxItem;

        // Criando variaveis
            int Id, Retorno, Quantidade;
            float Preco;
            String Nome, Email;

            int menuPrincipal;
            int menuCliente;
            int menuItem;
            int x = 0;

        // Do while do menu principal
        do {
            System.out.println("1 - MENU CLIENTES\n2 - MENU ITENS\n3 - ENCERRAR PROGRAMA");
            System.out.print("==>");
                menuPrincipal = input.nextInt();

            // if para entrar no menu de clientes quando o usuario digitar 1
                if (menuPrincipal == 1){
                    // Do while do menu cliente (1)
                    do {
                        Pedido.menuCliente();
                        System.out.print("==> ");
                            menuCliente = input.nextInt();
                        switch (menuCliente) {
                            case 1: // INSERIR CLIENTE
                                System.out.print("DIGITE O ID: ");
                                    Id = input.nextInt();
                                input.nextLine();
                                System.out.print("DIGITE O NOME: ");
                                    Nome = input.nextLine();
                                System.out.print("DIGITE O EMAIL: ");
                                    Email = input.nextLine();
                                objPedido.inserirCliente(Id, Nome, Email);
                                System.out.println("DATA DE CIRAÇÃO: " + Data);
                                break;
                            case 2: // BUSCAR CLIENTE POR ID
                                System.out.print("DIGITE O ID: ");
                                    auxCliente = objPedido.buscarPorCliente(input.nextInt());
                                if (auxCliente == null)
                                    System.out.println("CLIENTE NÃO ENCONTRADO!");
                                else
                                    System.out.println(auxCliente);
                                break;
                            case 3: // BUSCAR CLIENTE POR NOME
                                System.out.print("DIGITE O NOME: ");
                                    input.nextLine();
                                auxCliente = objPedido.buscarPorCliente(input.nextLine());
                                if (auxCliente == null)
                                    System.out.println("CLIENTE NÃO ENCONTRADO!");
                                else
                                    System.out.println(auxCliente);
                                break;
                            case 4: // REMOVER CLIENTE POR ID
                                System.out.print("DIGITE O ID: ");
                                    objPedido.removerCliente(input.nextInt());
                                break;
                            case 5: // REMOVER CLIENTE POR NOME
                                System.out.print("DIGITE O NOME: ");
                                    input.nextLine();
                                objPedido.removerCliente(input.nextLine());
                                break;
                            case 6: // ATUALIZAR CLIENTE POR ID
                                System.out.print("DIGITE O ID: ");
                                    Retorno = objPedido.atualizarCliente(input.nextInt());
                                if (Retorno < 0)
                                    System.out.println("CLIENTE NÃO ENCONTRADO!");
                                else {
                                    System.out.print("DIGITE O NOVO ID: ");
                                        Id = input.nextInt();
                                        input.nextLine();
                                    System.out.print("DIGITE O NOVO NOME: ");
                                        Nome = input.nextLine();
                                    System.out.print("DIGITE O NOVO EMAIL: ");
                                        Email = input.nextLine();
                                    objPedido.atualizarCliente(Retorno, Id, Nome, Email);
                                }
                                break;
                            case 7: // ATUALIZAR CLIENTE POR NOME
                                System.out.print("DIGITE O NOME: ");
                                    input.nextLine();
                                Retorno = objPedido.atualizarCliente(input.nextLine());
                                if (Retorno < 0)
                                    System.out.println("CLIENTE NÃO ENCONTRADO!");
                                else {
                                    System.out.print("DIGITE O NOVO ID: ");
                                        Id = input.nextInt();
                                        input.nextLine();
                                    System.out.print("DIGITE O NOVO NOME: ");
                                        Nome = input.nextLine();
                                    System.out.print("DIGITE O NOVO EMAIL: ");
                                        Email = input.nextLine();
                                    objPedido.atualizarCliente(Retorno, Id, Nome, Email);
                                }
                                break;
                        }
                    } while (menuCliente != 8);
            // else para entrar no menu de itens quando o cliente digita 2
                } else if (menuPrincipal == 2){
                    // Do while do menu de itens
                    do {
                        Pedido.menuItem();
                        System.out.print("==> ");
                            menuItem = input.nextInt();
                        switch (menuItem) {
                            case 1: // INSERIR ITEM
                                System.out.print("DIGITE O ID: ");
                                Id = input.nextInt();
                                input.nextLine();
                                System.out.print("DIGITE O NOME DO ITEM: ");
                                    Nome = input.nextLine();
                                System.out.print("DIGITE A QUANTIDADE: ");
                                    Quantidade = input.nextInt();
                                System.out.print("DIGITE O PREÇO: ");
                                    Preco = input.nextFloat();
                                objPedido.inserirItemPedido(Id, Nome, Quantidade, Preco);
                                System.out.println(Data);
                                break;
                            case 2: // BUSCAR ITEM POR ID
                                System.out.println("DIGITE O ID");
                                    auxItem = objPedido.buscarPorItemPedido(input.nextInt());
                                if (auxItem == null)
                                    System.out.println("ITEM NÃO ENCONTRADO!");
                                else
                                    System.out.println(auxItem);
                                    System.out.println("VALOR TOTAL: R$" + auxItem.getQuantidade() * auxItem.getPrecoUnitario());
                                break;
                            case 3: // BUSCAR ITEM POR NOME
                                System.out.print("DIGITE O NOME: ");
                                input.nextLine();
                                auxItem = objPedido.buscarPorItemPedido(input.nextLine());
                                if (auxItem == null)
                                    System.out.println("ITEM NÃO ENCONTRADO!");
                                else
                                    System.out.println(auxItem);
                                    System.out.println("VALOR TOTAL: R$" + auxItem.getQuantidade() * auxItem.getPrecoUnitario());
                                break;
                            case 4: // REMOVER ITEM POR ID
                                System.out.print("DIGITE O ID: ");
                                    objPedido.removerItemPedido(input.nextInt());
                                break;
                            case 5: // REMOVER ITEM POR NOME
                                System.out.print("DIGITE O NOME: ");
                                    input.nextLine();
                                objPedido.removerItemPedido(input.nextLine());
                                break;
                            case 6: // ATUALIZAR ITEM POR ID
                                System.out.print("DIGITE O ID: ");
                                Retorno = objPedido.atualizarItemPedido(input.nextInt());
                                if (Retorno < 0)
                                    System.out.println("ITEM NÃO ENCONTRADO!");
                                else {
                                    System.out.print("DIGITE O NOVO ID: ");
                                        Id = input.nextInt();
                                    System.out.print("DIGITE O NOVO NOME: ");
                                        Nome = input.nextLine();
                                    System.out.print("DIGITE A NOVA QUANTIDADE: ");
                                        Quantidade = input.nextInt();
                                    System.out.print("DIGITE O NOVO PREÇO: ");
                                        Preco = input.nextFloat();
                                    objPedido.atualizarItemPedido(Retorno, Id, Nome, Quantidade, Preco);
                                }
                                break;
                            case 7: // ATUALIZAR ITEM POR NOME
                                System.out.print("DIGITE O NOME: ");
                                input.nextLine();
                                    Retorno = objPedido.atualizarItemPedido(input.nextLine());
                                if (Retorno < 0)
                                    System.out.println("ITEM NÃO ENCONTRADO!");
                                else {
                                    System.out.print("DIGITE O NOVO ID: ");
                                    Id = input.nextInt();
                                    System.out.print("DIGITE O NOVO NOME: ");
                                        Nome = input.nextLine();
                                    System.out.print("DIGITE A NOVA QUANTIDADE: ");
                                        Quantidade = input.nextInt();
                                    System.out.print("DIGITE O NOVO PREÇO: ");
                                        Preco = input.nextFloat();
                                    objPedido.atualizarItemPedido(Retorno, Id, Nome, Quantidade, Preco);
                                }
                                break;

                            default:
                                System.out.println("COMANDO INVALIDO");
                                break;
                        }
                    } while (menuItem != 8);
                }else{
                    System.exit(0);
                }

            // Retorna a classe main
            System.out.println("DESEJA SAIR DO PROGRAMA?\n0 - SIM\n1 - NÃO");
            menuPrincipal = input.nextInt();
            main(args);

        } while(menuPrincipal != 0);
    }

}
