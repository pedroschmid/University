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
public class ContaDeBanco {
    // atributos
    protected float saldo;

    // constructor
    public ContaDeBanco() {
    }

    public ContaDeBanco(float saldo) {
        this.saldo = saldo;
    }

    // get and set
    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }
    
    // metodos
    public void deposito(float valor){
        saldo += valor;
    }
    
    public boolean retirada(float valor){
        saldo -= valor;
        
        return true;
    }
    
    public void mostrarSaldo(){
        if(saldo >= 0){
            System.out.println("SALDO ATUAL: " + saldo);
        } else {
            System.out.println("SALDO NEGATIVO!");
        }
    }
    
    
    
}
