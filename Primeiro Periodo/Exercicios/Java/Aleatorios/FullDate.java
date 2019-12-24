package Exercises;

import java.util.Scanner;

public class FullDate {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int day;
        int month;
        int year;
        int operator;

        System.out.println("1 - mm/dd/aaaa");
        System.out.println("2 - dd/mm/aaaa");
        System.out.println("3 - dd-mm-aaaa");
        System.out.println("4 - Month d, aaaa");

        System.out.println("");

        System.out.println("Select the date format you want: ");
        operator = input.nextInt();

        switch (operator) {
            case 1:
                System.out.println("You have selected the format: mm/dd/aaaa");
                System.out.println("Insert the values in the following order: Month, Day and Year");

                month = input.nextInt();
                day = input.nextInt();
                year = input.nextInt();

                if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 1 && year <= 2999) {
                    System.out.println("the date entered is: " + month + "/" + day + "/" + year);
                    break;
                } else {
                    System.out.println("Invalid date");
                    break;
                }

            case 2:
                System.out.println("You have selected the format: dd/mm/aaaa");
                System.out.println("Insert the values in the following order: Day, Month and Year");

                day = input.nextInt();
                month = input.nextInt();
                year = input.nextInt();

                if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 1 && year <= 2999) {
                    System.out.println("the date entered is: " + day + "/" + month + "/" + year);
                    break;
                } else {
                    System.out.println("Invalid date");
                    break;
                }

            case 3:
                System.out.println("You have selected the format: dd-mm-aaaa");
                System.out.println("Insert the values in the following order: Day, Month and Year");

                day = input.nextInt();
                month = input.nextInt();
                year = input.nextInt();

                if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 1 && year <= 2999) {
                    System.out.println("the date entered is: " + day + "-" + month + "-" + year);
                    break;
                } else {
                    System.out.println("Invalid date");
                    break;
                }
            case 4:
                System.out.println("You have selected the format: Month d, aaaa");
                System.out.println("Insert the values in the following order: Month, Day and Year");

                month = input.nextInt();
                day = input.nextInt();
                year = input.nextInt();

                if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 1 && year <= 2999) {
                    switch (month) {
                        case 1:
                            System.out.println("the date entered is: January " + day + ", " + year);
                            break;
                        case 2:
                            System.out.println("the date entered is: February " + day + ", " + year);
                            break;
                        case 3:
                            System.out.println("the date entered is: March " + day + ", " + year);
                            break;
                        case 4:
                            System.out.println("the date entered is: April " + day + ", " + year);
                            break;
                        case 5:
                            System.out.println("the date entered is: May " + day + ", " + year);
                            break;
                        case 6:
                            System.out.println("the date entered is: June " + day + ", " + year);
                            break;
                        case 7:
                            System.out.println("the date entered is: July " + day + ", " + year);
                            break;
                        case 8:
                            System.out.println("the date entered is: August " + day + ", " + year);
                            break;
                        case 9:
                            System.out.println("the date entered is: September " + day + ", " + year);
                            break;
                        case 10:
                            System.out.println("the date entered is: October " + day + ", " + year);
                            break;
                        case 11:
                            System.out.println("the date entered is: November " + day + ", " + year);
                            break;
                        case 12:
                            System.out.println("the date entered is: December " + day + ", " + year);
                            break;
                        default:
                            System.out.println("Invalid month");
                            break;
                    }
                } else {
                    System.out.println("Invalid date");
                    break;
                }
            default:
                System.out.println("Invalid date");
                break;
        }
    }
}
