#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float A, L, H;

  printf("enter the base value of the rectangle:\n");
  scanf("%f", &L);

  printf("Enter the height value of the triangle:\n");
  scanf("%f", &H);

  A = L * H;

  printf("The area of the rectangle is: %2.f", A);
}
