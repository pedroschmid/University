package Exercises;

import java.util.Scanner;

public class StudentAverageRetake {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double grade1, grade2, retakeGrade, average;
        int operator;

        System.out.println("Insert the value of your first grade score: ");
        grade1 = input.nextDouble();

        System.out.println("Insert the value of your second grade score: ");
        grade2 = input.nextDouble();

        average = (grade1 + grade2) / 2;

        if (average >= 7) {
            operator = 1;
        } else if (average >= 3 && average < 7) {
            operator = 2;
        } else {
            operator = 3;
        }

        switch (operator) {
            case 1:
                System.out.println("Your average score is: " + average + " ,the student its approved!");
                break;

            case 2:
                System.out.println("Your average score is: " + average + " ,your score its below of the average, the student had to do the retake test!");
                System.out.println("...");

                System.out.println("Insert the value of your retake grade score: ");
                retakeGrade = input.nextDouble();

                average = (average + retakeGrade) / 2;

                if (average >= 5) {
                    System.out.println("The score of your retake test is: " + average + " ,the student its approved!");
                } else {
                    System.out.println("The score of your retake test is: " + average + " ,the student has failed the retake test, disapproved!");
                }
                break;

            case 3:
                System.out.println("The student its disapproved");
                break;
        }
    }
}
