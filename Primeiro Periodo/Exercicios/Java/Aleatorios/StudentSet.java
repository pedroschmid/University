package Exercises;

import java.util.Scanner;

public class StudentSet {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int enrollment = 0;
        double grade1, grade2, grade3, media;

        while (enrollment != 999){
            System.out.println("Starting...");

            System.out.println("Please insert your registration number: ");
            enrollment = input.nextInt();

            System.out.println("Now insert your first grade score: ");
            grade1 = input.nextDouble();
            System.out.println("Now insert your second grade score: ");
            grade2 = input.nextDouble();
            System.out.println("Now insert your third grade score: ");
            grade3 = input.nextDouble();

            media = (grade1 + grade2 + grade3) / 3;

            if (media >= 6){
                System.out.println("The student of enrollment: " + enrollment + " ,its approved!");
            } else if (media >= 4 && media < 6){
                System.out.println("The student of enrollment: " + enrollment + " ,had to do the retake test!");
            } else {
                System.out.println("The student of enrollment: " + enrollment + " ,its disapproved");
            }
        }
    }
}
