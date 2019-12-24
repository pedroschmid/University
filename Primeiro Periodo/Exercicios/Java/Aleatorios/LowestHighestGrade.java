package Exercises;

import java.util.Scanner;

public class LowestHighestGrade {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] grade = new int[3];
        int maxValue = 0;
        int lowestValue = 0;
        int maxIndex = 0;
        int lowestIndex = 0;

        for (int i = 0; i < 3; i++){
            System.out.println("Insert your grade: ");
            grade[i] = input.nextInt();

            if (maxValue < grade[i]){
                maxValue = grade[i];
                maxIndex = i;
            }

            if (lowestValue > grade[i]){
                lowestValue = grade[i];
                lowestIndex = i;
            }
        }
        System.out.println("The highest grade is: " + maxValue + " , and the highest index value is: " + maxIndex);
        System.out.println("The lowest grade is: " + lowestValue + " , and the lowest index value is: " + lowestIndex);
    }
}