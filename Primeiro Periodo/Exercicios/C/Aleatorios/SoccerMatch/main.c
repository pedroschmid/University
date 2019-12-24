// 4 tipos de ingressos assim distribuídos: popular 10% a R$1,00, geral 50% a R$5,00, arquibancada 30% a R$10,00 e cadeiras 10% a R$ 20,00.

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  int totalPublic;
  float gameIncome, popularTicket, generalTicket, bleachersTicket, chairTicket;

  printf("Enter total amount of people:\n");
  scanf("%i", &totalPublic);

  popularTicket = totalPublic * 0.1;
  generalTicket = totalPublic * 0.5;
  bleachersTicket = totalPublic * 0.3;
  chairTicket = totalPublic * 0.2;
  gameIncome = (popularTicket * 1) + (generalTicket * 5) + (bleachersTicket * 10) + (chairTicket * 20);

  printf("The number of popular tickets is: %.f\n", popularTicket);
  printf("The number of general tickets is: %.f\n", generalTicket);
  printf("The number of bleachers tickets is: %.f\n", bleachersTicket);
  printf("The number of chair tickets is: %.f\n", chairTicket);
  printf("The total income of the game is: %.2f\n", gameIncome);

  return 0;
}
