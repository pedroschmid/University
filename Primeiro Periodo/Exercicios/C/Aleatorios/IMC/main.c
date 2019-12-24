#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float IMC, Height, Weight;
  printf("Enter the weight value:\n");
  scanf("%f", &Weight);

  printf("Enter the height value:\n");
  scanf("%f", &Height);

  IMC = Weight / pow(Height, 2);

  if (IMC > 0 && IMC <= 18.5) {
    printf("Your IMC is: %2.f\n", IMC);
    printf("Below of the weight!");
  } else if (IMC > 18.5 && IMC <= 24.9) {
    printf("Your IMC is: %2.f\n", IMC);
    printf("Normal weight!");
  } else {
    printf("Your IMC is: %2.f\n", IMC);
    printf("Over of the weight!");
  }

  return 0;
}
