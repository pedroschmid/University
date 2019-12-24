public class ItemPedido {

    // Criação de atributos
        private int itemPedidoId;
        private String nomeItem;
        private int quantidade;
        private float precoUnitario;

    // Constructor default vazio (apenas para ser chamado sem passar parametros)
        public ItemPedido() {}

    // Constructor de preenchimento de dados (passando os parametros)
        public ItemPedido(int itemPedidoId, String item, int quantidade, float precoUnitario) {
            this.itemPedidoId = itemPedidoId;
            this.nomeItem = item;
            this.quantidade = quantidade;
            this.precoUnitario = precoUnitario;
        }

    // Getters and Setters
        // Id do item
            public int getItemPedidoId() {
                return itemPedidoId;
            }

            public void setItemPedidoId(int itemPedidoId) {
                this.itemPedidoId = itemPedidoId;
            }

        // Nome do item
            public String getNomeItem() {
                return nomeItem;
            }

            public void setNomeItem(String item) {
                this.nomeItem = item;
            }

        // Quantidade
            public int getQuantidade() {
                return quantidade;
            }

            public void setQuantidade(int quantidade) {
                this.quantidade = quantidade;
            }

        // Preço unitario
            public float getPrecoUnitario() {
                return precoUnitario;
            }

            public void setPrecoUnitario(float precoUnitario) {
                this.precoUnitario = precoUnitario;
            }

    // Metodo para calcular preço total
        public float calcularPrecoTotal() {
            return getQuantidade() * getPrecoUnitario();
        }

    @Override
    public String toString() {
        return "ID: " + getItemPedidoId() + "| NOME: " + getNomeItem() + " | QTD: " +getQuantidade() + " | PRECO: " + getPrecoUnitario();
    }
}
