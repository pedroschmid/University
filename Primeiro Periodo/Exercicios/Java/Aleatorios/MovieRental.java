package Exercises;

import java.text.DecimalFormat;
import java.util.Scanner;
import java.lang.Math;

public class MovieRental {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("###,#00.0");

        int amountMovies, annualAmountMovies;
        double rentedMovies, moviesValue, annualBilling, finesValue;

        System.out.println("Insert the amout of movies: ");
        amountMovies = input.nextInt();

        System.out.println("Insert the value of each movie: ");
        moviesValue = input.nextDouble();

        rentedMovies = (amountMovies / 3);
        annualBilling = (rentedMovies * moviesValue) * 12;

        finesValue = (rentedMovies / 10) * 0.1;

        annualAmountMovies = (int) (amountMovies - (amountMovies * 0.02) - (amountMovies / 10));

        System.out.println("The annual billing is: $" + df.format(annualBilling));
        System.out.println("The amount earned with fine in the month is: $" + Math.round(finesValue));
        System.out.println("The amount of movies at the end of the year will be: " + df.format(annualAmountMovies));
    }
}
