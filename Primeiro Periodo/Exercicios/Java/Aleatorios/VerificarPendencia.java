package Exercises;

import java.util.Scanner;

public class VerificarPendencia {
    public static void main(String[] args) {
        //Variavel do scanner para coletar dados
        java.util.Scanner entrada = new java.util.Scanner(System.in);

        System.out.println("Digite seu nome!");
        String nome = entrada.nextLine();

        System.out.println("Digite seu endereço!");
        String endereco = entrada.nextLine();

        System.out.println("Digite seu telefone!");
        int telefone = entrada.nextInt();

        System.out.println("Digite sua idade!");
        int idade = entrada.nextInt();


        System.out.println("O cliente "+nome+", com idade de "+idade+" Anos,"+"Domiciliado no endereço "+endereco+" e telefone "+telefone+" não possui nenhum tipo de pendencia.");

    }
}
