#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  int numberOne, numberTwo, Result;
  char Operator;

  printf("Choose the type of operation you want to perform!\n\n");
  printf("A to Addition \nS to subtraction \nM to multiplication \nD to division\nR to rest\n\n");
  printf("Now choose your operation!\n");

  scanf("%c", &Operator);
  printf("You chose: %.c\n", Operator);

  if (Operator != 'A' && Operator != 'S' && Operator != 'M' && Operator != 'D' && Operator != 'R') {
    printf("You entered an invalid option");
  } else {
    printf("Enter the value of the first number:\n");
    scanf("%i", &numberOne);
    printf("Enter the value of the second number:\n");
    scanf("%i", &numberTwo);

    switch (Operator) {
    case 'A':
      Result = numberOne + numberTwo;
      printf("The sum result is: %.2i", Result);
      break;

    case 'S':
      Result = numberOne - numberTwo;
      printf("The result of subtraction is: %.2i", Result);
      break;

    case 'M':
      Result = numberOne * numberTwo;
      printf("The result of multiplication is: %.2i", Result);
      break;

    case 'D':
      Result = (float) numberOne / numberTwo;
      printf("The result of the division is: %.2i", Result);
      break;

    case 'R':
      Result = numberOne % numberTwo;
      printf("the result of the rest is: %.2i", Result);
      break;
    }
  }
  return 0;
}
