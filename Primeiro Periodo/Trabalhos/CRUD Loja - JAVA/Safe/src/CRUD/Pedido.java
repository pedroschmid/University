import java.util.ArrayList;
import java.util.List;

public class Pedido {
    // Criação da lista de itens
        public List<ItemPedido> listaItensPedido = new ArrayList<>();

    // Criação de atributos
        private int pedidoId;
        private String dataEmissao;
        private float valorTotal;

    // Constructor default vazio (apenas para ser chamado sem passar parametros)
        public Pedido() {
        }

    // Constructor de preenchimento de dados (passando os parametros)
        public Pedido(int pedidoId, String dataEmissao) {
            this.pedidoId = pedidoId;
            this.dataEmissao = dataEmissao;
        }

    // Getters e Setters
        // Id do pedido
            public int getPedidoId() {
                return pedidoId;
            }

            public void setPedidoId(int pedidoId) {
                this.pedidoId = pedidoId;
            }

        // Data de emissão
            public String getDataEmissao() {
                return dataEmissao;
            }

            public void setDataEmissao(String dataEmissao) {
                this.dataEmissao = dataEmissao;
            }

        // Valor total
            public float getValorTotal() {
                return valorTotal;
            }

            public void setValorTotal(float valorTotal) {
                this.valorTotal = valorTotal;
            }

    // Metodos
        // Metodo de calcular preço total
        public void calcularPrecoTotal() {
            float soma = 0;
            for (ItemPedido item : listaItensPedido) {
                soma += item.calcularPrecoTotal();
            }
            this.valorTotal = soma;
        }

        // Metodos de clientes
            // Metodo de buscar cliente por id
                public Cliente buscarPorCliente(int id) {
                    for (Cliente cliente : Loja.listaClientes) {
                        if (cliente.getClienteId() == id)
                            return cliente;
                    }
                    return null;
                }

            // Metodo de buscar cliente por nome
                public Cliente buscarPorCliente(String nome) {
                    for (Cliente cliente : Loja.listaClientes) {
                        if (cliente.getNome().equals(nome))
                            return cliente;
                    }
                    return null;
                }

            // Metodo de remover cliente por id
                public void removerCliente(int id) {
                    for (int i = 0; i < Loja.listaClientes.size(); i++) {
                        if (Loja.listaClientes.get(i).getClienteId() == id) {
                            Loja.listaClientes.remove(i);
                            System.out.println("Cliente removido");
                            break;
                        }
                    }
                    System.out.println("Cliente não encontrado");
                }

            // Metodo de remover cliente por nome
                public void removerCliente(String nome) {
                    for (int i = 0; i < Loja.listaClientes.size(); i++) {
                        if (Loja.listaClientes.get(i).getNome().equals(nome)) {
                            Loja.listaClientes.remove(i);
                            System.out.println("Cliente removido");
                            break;
                        }
                    }
                    System.out.println("Cliente não encontrado");
                }

            // Metodo de atualizar cliente por id
                public int atualizarCliente(int id) {
                    for (int i = 0; i < Loja.listaClientes.size(); i++) {
                        if (Loja.listaClientes.get(i).getClienteId() == id) {
                            return i;
                        }
                    }
                    return -1;
                }

            // Metodo de atualizar cliente por nome
                public int atualizarCliente(String nome) {
                    for (int i = 0; i < Loja.listaClientes.size(); i++) {
                        if (Loja.listaClientes.get(i).getNome().equals(nome)) {
                            return i;
                        }
                    }
                    return -1;
                }

            // Metodo de atualizar cliente passando os parametros do .set
                public void atualizarCliente(int i, int id, String nome, String email) {
                    Loja.listaClientes.set(i, new Cliente(id, nome, email));
                    System.out.println("Cliente atualizado com sucesso");
                }

            // Metodo de inserir cliente passando os parametros do .add
                public void inserirCliente(int id, String nome, String email) {
                    Loja.listaClientes.add(new Cliente(id, nome, email));
                    System.out.println("Cliente inserido com sucesso.");
                }


    // Metodos de itens
        // Metodo de buscar item por id
            public ItemPedido buscarPorItemPedido(int id) {
                for (ItemPedido item : listaItensPedido) {
                    if (item.getItemPedidoId() == id)
                        return item;
                }
                return null;
            }

            // Metodo de buscar item por nome
                public ItemPedido buscarPorItemPedido(String nome) {
                    for (ItemPedido item : listaItensPedido) {
                        if (item.getNomeItem().equals(nome))
                            return item;
                    }
                    return null;
                }

            // Metodo de remover item por id
                public void removerItemPedido(int id) {
                    for (int i = 0; i < listaItensPedido.size(); i++) {
                        if (listaItensPedido.get(i).getItemPedidoId() == id) {
                            listaItensPedido.remove(i);
                            System.out.println("Item removido");
                            break;
                        }
                    }
                    System.out.println("Item não encontrado");
                }

            // Metodo de remover item por nome
                public void removerItemPedido(String nome) {
                    for (int i = 0; i < listaItensPedido.size(); i++) {
                        if (listaItensPedido.get(i).getNomeItem().equals(nome)) {
                            listaItensPedido.remove(i);
                            System.out.println("Item removido");
                            break;
                        }
                    }
                    System.out.println("Item não encontrado");
                }

            // Metodo de atualizar item por id
                public int atualizarItemPedido(int id) {
                    for (int i = 0; i < listaItensPedido.size(); i++) {
                        if (listaItensPedido.get(i).getItemPedidoId() == id) {
                            return i;
                        }
                    }
                    return -1;
                }

            // Metodo de atualizar item por nome
                public int atualizarItemPedido(String nome) {
                    for (int i = 0; i < listaItensPedido.size(); i++) {
                        if (listaItensPedido.get(i).getNomeItem().equals(nome)) {
                            return i;
                        }
                    }
                    return -1;
                }

            // Metodo de atualizar item passando os parametros do .set
                public void atualizarItemPedido(int i, int id, String nome, int quantidade, float preco) {
                    listaItensPedido.set(i, new ItemPedido(id, nome, quantidade, preco));
                    System.out.println("Item atualizado com sucesso");
                }

            // Metodo de inserir item passando os parametros do .add
                public void inserirItemPedido(int id, String nome, int quantidade, float preco) {
                    listaItensPedido.add(new ItemPedido(id, nome, quantidade, preco));
                    System.out.println("Item inserido com sucesso.");
                }

    // Metodos de menus
        // Metodo para exibir menu de clientes
            static public void menuCliente() {
                System.out.println("1 - INSERIR CLIENTE");
                System.out.println("2 - BUSCAR CLIENTE POR ID");
                System.out.println("3 - BUSCAR CLIENTE POR NOME");
                System.out.println("4 - REMOVER CLIENTE POR ID");
                System.out.println("5 - REMOVER CLIENTE POR NOME");
                System.out.println("6 - ATUALIZAR CLIENTE POR ID");
                System.out.println("7 - ATUALIZAR CLIENTE POR NOME");
                System.out.println("8 - ENCERRAR MENU DE CLIENTES");
        }

        // Metodo para exibir menu de itens
            static public void menuItem() {
                System.out.println("1 - INSERIR ITEM");
                System.out.println("2 - BUSCAR ITEM POR ID");
                System.out.println("3 - BUSCAR ITEM POR NOME");
                System.out.println("4 - REMOVER ITEM POR ID");
                System.out.println("5 - REMOVER ITEM POR NOME");
                System.out.println("6 - ATUALIZAR ITEM POR ID");
                System.out.println("7 - ATUALIZAR ITEM POR NOME");
                System.out.println("8 - ENCERRAR MENU DE ITENS");
        }

}
