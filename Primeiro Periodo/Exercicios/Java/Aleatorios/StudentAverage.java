package Exercises;

import java.util.Scanner;

public class StudentAverage {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double grade1, grade2, grade3, average;

        System.out.println("Insert the value of your first grade score: ");
        grade1 = input.nextDouble();


        System.out.println("Insert the value of your second grade score: ");
        grade2 = input.nextDouble();


        System.out.println("Insert the value of your last grade score: ");
        grade3 = input.nextDouble();

        average = (grade1 + grade2 + grade3) / 3;

        if (average >= 6) {
            System.out.println("The student its approved!");
        } else if (average >= 4 && average < 6) {
            System.out.println("The student had to do the retake test!");
        } else {
            System.out.println("The student is disapproved");
        }
    }
}
