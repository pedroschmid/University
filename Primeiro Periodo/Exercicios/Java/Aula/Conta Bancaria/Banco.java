/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package banco;

/**
 *
 * @author alunodev10
 */
public class Banco {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        System.out.println("CONTA DE BANCO");
        ContaDeBanco cb = new ContaDeBanco(100);
        cb.deposito(20);
        cb.mostrarSaldo();
        cb.retirada(20);
        cb.mostrarSaldo();
        System.out.println("");
        
        System.out.println("CONTA ESPECIAL");
        ContaEspecial ce = new ContaEspecial(50, 100);
        ce.deposito(200);
        ce.mostrarSaldo();
        System.out.println("");
        
        System.out.println("CONTA POUPANÇA");
        ContaPoupanca cp = new ContaPoupanca(1, 100);
        cp.deposito(50);
        cp.aplicarCorrecao();
        cp.mostrarSaldo();
    }
    
}
