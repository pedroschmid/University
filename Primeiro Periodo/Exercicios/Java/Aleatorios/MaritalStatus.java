package Exercises;

import java.util.Scanner;

public class MaritalStatus {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int operator;
        String name;

        System.out.println("Insert your name: ");
        name = input.nextLine();

        System.out.println("");

        System.out.println("1 - Single");
        System.out.println("2 - Unqualified");
        System.out.println("3 - Married");
        System.out.println("4 - Divorced");
        System.out.println("5 - Widower");

        System.out.println("");

        System.out.println("Insert the number corresponding to your marital status: ");
        operator = input.nextInt();

        switch (operator) {
            case 1:
                System.out.println("The marital status of " + name + " is: Single");
                break;
            case 2:
                System.out.println("The marital status of " + name + " is: Unqualified");
                break;
            case 3:
                System.out.println("The marital status of " + name + " is: Married");
                break;
            case 4:
                System.out.println("The marital status of " + name + " is: Divorced");
                break;
            case 5:
                System.out.println("The marital status of " + name + " is: Widower");
                break;
            default:
                System.out.println("Invalid option");
                break;
        }
    }
}