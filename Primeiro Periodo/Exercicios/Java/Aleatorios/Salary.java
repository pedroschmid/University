package Exercises;

import java.util.Scanner;

public class Salary {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String WorkerName;
        double SalaryBrute, SalaryLiquid, WorkedHours, ValueHours, Inss;


        System.out.println("welcome to the 'Brute And Liquid Salary Calculator', please introduce yourself by entering your name below: ");
        WorkerName = input.nextLine();

        System.out.println("Thanks for identifying " + WorkerName + " , Please keep following the instructions until the end of the program.");

        System.out.println("Insert 1 if you want to calculate the monthly salary");
        System.out.println("Insert 2 if you want to calculate salary counting only working days");
        int choose = input.nextInt();

        if (choose == 1) {
            System.out.println("You have chosen the first option!");
        } else {
            System.out.println("You have chosen the second option!");
        }

        switch (choose) {
            case 1:
                System.out.println("Now we're gonna calculate your brute salary based on your chosen, please insert your totally 'Worked Hours' ");
                WorkedHours = input.nextDouble();
                System.out.println("Now Insert your 'Value Per Hour' ");
                ValueHours = input.nextDouble();

                SalaryBrute = (WorkedHours * ValueHours) * 30;

                System.out.println("Your brute salary is: R$" + SalaryBrute + " ");

                if (SalaryBrute <= 1751.81) {
                    Inss = (SalaryBrute * 0.08);
                } else if (SalaryBrute >= 1751.82 && SalaryBrute <= 2919.72) {
                    Inss = (SalaryBrute * 0.09);
                } else {
                    Inss = (SalaryBrute * 0.11);
                }

                SalaryLiquid = (SalaryBrute - Inss);
                System.out.println("Your liquid sallary is: " + SalaryLiquid);
                break;

            case 2:
                System.out.println("Now we're gonna calculate your brute salary based on your chosen, please insert  your totally 'Worked Hours' ");
                WorkedHours = input.nextDouble();
                System.out.println("Now Insert your 'Value Per Hour' ");
                ValueHours = input.nextDouble();

                SalaryBrute = (WorkedHours * ValueHours) * 23;

                System.out.println("Your brute salary is: R$" + SalaryBrute + " ");

                if (SalaryBrute <= 1751.81) {
                    Inss = (SalaryBrute * 0.08);
                } else if (SalaryBrute >= 1751.82 && SalaryBrute <= 2919.72) {
                    Inss = (SalaryBrute * 0.09);
                } else {
                    Inss = (SalaryBrute * 0.11);
                }

                SalaryLiquid = (SalaryBrute - Inss);
                System.out.println("Your liquid salary is: " + SalaryLiquid);
                break;
        }

    }
}
