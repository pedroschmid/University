#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float A, B, C;

  printf("Enter the value of B:\n");
  scanf("%f", &B);

  printf("Enter the value of C:\n");
  scanf("%f", &C);

  A = sqrt(pow(B, 2) + pow(C, 2));

  printf("The value of the hypotenuse is: %2.f", A);

  return 0;
}
