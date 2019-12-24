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
public class ContaPoupanca extends ContaDeBanco implements Capitalizacao{
    // atributos
    private int dia;
    private float correcao = 0.03f;
    
    // constructor
    public ContaPoupanca(int dia, float saldo) {
        super(saldo);
        this.dia = dia;
    }
    
    // metodos
    public void aplicarCorrecao(){
        saldo += (correcao * saldo);
    }
    
    public void mostrarSaldo(){
            System.out.println("DIA DE ANIVERSARIO: " + dia);
            System.out.println("CORREÇÃO APLICADA: " + correcao + "%");
            System.out.println("SALDO CORRIGIDO: " + saldo);
    }
    
    public void calculaPremio(){
        saldo += (correcao * 0.01f);
    }
}
