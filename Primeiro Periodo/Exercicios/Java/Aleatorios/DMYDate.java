package Exercises;

import java.util.Scanner;

public class DMYDate {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int day, month, year;

        System.out.println("Insert the values in the following order: Day, Month and Year");
        day = input.nextInt();
        month = input.nextInt();
        year = input.nextInt();

        if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 1 && year <= 2999){
            System.out.println("the date entered is: " + day + "/" + month + "/" + year);
        } else {
            System.out.println("Invalid date!");
        }
    }
}
