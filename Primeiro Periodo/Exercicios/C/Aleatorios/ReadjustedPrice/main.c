#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

int main() {
  float productPrice, reajustedPrice, percentageValue;
  char switchChoose , operationChoose [128];

  printf("if you want to add the percentage value type YES if not type NOT\n");
  scanf("%s", &operationChoose);

  if (strcmp(operationChoose, "YES") == 0) {

    printf("Enter percentage value\n");
    scanf("%f", &percentageValue);

    printf("A to Addition\nD to Descount\n");
    scanf("%s", &switchChoose);

    switch (switchChoose) {
    case 'A':
      printf("Enter product price:\n");
      scanf("%f", &productPrice);

      reajustedPrice = productPrice + (productPrice * (percentageValue / 100));
      printf("Total price: %.2f", reajustedPrice);
      break;

    case 'D':
      printf("Enter product price:\n");
      scanf("%f", &productPrice);

      reajustedPrice = productPrice - (productPrice * (percentageValue / 100));
      printf("Total price: %.2f", reajustedPrice);
      break;
    }

  } else if (strcmp(operationChoose, "NOT") == 0){

    printf("A to Addition\nD to Descount\n");
    scanf("%s", &switchChoose);

    switch (switchChoose) {
    case 'A':
      printf("Enter product price:\n");
      scanf("%f", &productPrice);

      reajustedPrice = productPrice + (productPrice * 0.03);
      printf("Total price: %.2f", reajustedPrice);
      break;

    case 'D':
      printf("Enter product price:\n");
      scanf("%f", &productPrice);

      reajustedPrice = productPrice - (productPrice * 0.03);
      printf("Total price: %.2f", reajustedPrice);
      break;
    }

  } else {
      printf("The chosen operation is invalid!");
  }
  return 0;
}
