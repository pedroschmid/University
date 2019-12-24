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
public class ContaEspecial extends ContaDeBanco implements Capitalizacao{
    // atributos
    private float limite;

    // constructor
    public ContaEspecial(float limite) {
        this.limite = limite;
    }

    public ContaEspecial(float limite, int saldo) {
        super(saldo);
        this.limite = limite;
    }

    // get and set
    public float getLimite() {
        return limite;
    }

    public void setLimite(float limite) {
        this.limite = limite;
    }
    
    // metodos
    public void mostrarSaldo(){
        if(saldo+limite > 0){
            System.out.println("SALDO ATUAL COM LIMITE: " + (saldo+limite));
        } else {
            System.out.println("SALDO ZERADO!");
        }
    }
    
    @Override
    public void calculaPremio(){
        saldo += (limite * 0.4f);
    }
}
