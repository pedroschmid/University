package Exercises;

import  java.util.Scanner;

public class IMC {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Insert your height: ");
        double height = input.nextDouble();

        System.out.println("Insert your weight: ");
        double weight = input.nextDouble();

        double imc = (height * height) / weight;

        if (imc < 18.5){
            System.out.println("Under weight");
        } else if (imc > 18.5 && imc < 24.9){
            System.out.println("Normal weight");
        } else if (imc > 25 && imc < 29.9){
            System.out.println("Over weight");
        } else if (imc > 30 && imc < 34.9){
            System.out.println("Obesity level 1");
        } else if (imc > 35 && imc < 39.9){
            System.out.println("Obesity level 2");
        } else {
            System.out.println("Obesity level 3");
        }
    }
}