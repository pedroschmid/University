package Exercises;

import java.util.Scanner;

public class HighestGrade {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int maxValue = 0;
        int index = 0;
        int[] grade = new int[3];

        for (int i = 0; i < 3; i++) {
            System.out.println("Insert your grade: ");
            grade[i] = input.nextInt();

            if (maxValue < grade[i]) {
                maxValue = grade[i];
                index = i;
            }
        }

        System.out.println("The highest grade is: " + maxValue);
        System.out.println("The highest value index is: " + index);
    }
}
