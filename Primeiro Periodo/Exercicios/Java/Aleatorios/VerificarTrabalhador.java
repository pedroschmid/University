import java.util.Scanner;

public class VerificarTrabalhador {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.println("Insira o seu nome!");
        String nome = entrada.nextLine();

        System.out.println("Insira seu genero!");
        String sexo = entrada.nextLine();

        System.out.println("Insira seu estado civil!");
        String estadocivil = entrada.nextLine();

        System.out.println("Insira sua idade!");
        int idade = entrada.nextInt();

        System.out.println("Insira seu salario");
        float salario = entrada.nextFloat();

        if (nome != null && sexo != null && idade > 0 && estadocivil != null && salario > 0){
            System.out.println("O trabalhor(a) " + nome + " do sexo " + sexo + ",idade " + idade + ",estado civil " + estadocivil + " e salario " + salario + " encontra-se empregado neste estabelecimento.");
        } else {
            System.out.println("O Trabalhor(a) não foi encontrado no nosso sistema!");
        }
    }
}
