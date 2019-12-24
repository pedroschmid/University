#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float A, L;

  printf("Enter the value of the sides of the square:\n");
  scanf("%f", &L);

  A = pow(L, 2);

  printf("The area of ​​the square is: %2.f", A);
}
