public class Cliente {

    // Criação de atributos
        private int clienteId;
        private String nome;
        private String email;

    // Constructor default vazio (apenas para ser chamado sem passar parametros)
        public Cliente() {}

    // Constructor de preenchimento de dados (passando os parametros)
        public Cliente(int clienteId, String nome, String email) {
            this.clienteId = clienteId;
            this.nome = nome;
            this.email = email;
        }

    // Getters e Setters
        // Id do cliente
            public int getClienteId() {
                return clienteId;
            }

            public void setClienteId(int clienteId) {
                this.clienteId = clienteId;
            }

        // Nome do cliente
            public String getNome() {
                return nome;
            }

            public void setNome(String nome) {
                this.nome = nome;
            }

        // Email do cliente
            public String getEmail() {
                return email;
            }

            public void setEmail(String email) {
                this.email = email;
            }

    // Metodos
        // Metodo para imprimir para o usuario os dados setados
            @Override
            public String toString() {
                return "ID: " + getClienteId() + "| NOME: " + getNome() + " |EMAIL: " + getEmail() + "\n";
            }
    
}
