package Exercises;

import java.util.Scanner;

public class ImpostoDeRenda {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        System.out.println("Insert the value of your salary here!");
        double salary = input.nextFloat();
        double tax;

        if (salary > 0 && salary <= 1903.98){
            System.out.println("Tax Free!");
        } else if (salary >= 1903.99 && salary <= 2826.65){
            tax = (salary * 7.5) / 100;
            salary = salary - tax;
            System.out.println("The tax that will be deducted from your salary is: $" + tax + ",so your solid salary will be: $" + salary);
        } else if (salary >= 2826.66 && salary <= 3751.05){
            tax = (salary * 15) / 100;
            salary = salary - tax;
            System.out.println("The tax that will be deducted from your salary is: $" + tax + ",so your solid salary will be: $" + salary);
        } else if (salary >= 3751.06 && salary <= 4664.68){
            tax = (salary * 22.5) / 100;
            salary = salary - tax;
            System.out.println("The tax that will be deducted from your salary is: $" + tax + ",so your solid salary will be: $" + salary);
        } else {
            tax = (salary * 27.5) / 100;
            salary = salary - tax;
            System.out.println("The tax that will be deducted from your salary is: $" + tax + ",so your solid salary will be: $" + salary);
        }

    }
}
