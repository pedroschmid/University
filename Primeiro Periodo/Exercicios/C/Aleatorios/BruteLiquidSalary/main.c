#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float SalaryHour, WorkedHour, BruteSalary, LiquidSalary, IncomeTax, INSS, Syndicate;

  printf("Enter how much you earn per hour:\n");
  scanf("%f", &SalaryHour);

  printf("Enter how many hours do you work per day:\n");
  scanf("%f", &WorkedHour);

  WorkedHour = WorkedHour * 30;
  BruteSalary = SalaryHour * WorkedHour;

  IncomeTax = BruteSalary * 0.11;
  INSS = BruteSalary * 0.08;
  Syndicate = BruteSalary * 0.05;

  LiquidSalary = BruteSalary - IncomeTax - INSS - Syndicate;

  printf("Your brute salary is: $ %.2f \n", BruteSalary);
  printf("the amount that was paid to inss:: $ %.2f \n", INSS);
  printf("the amount that was paid to syndicate: $ %.2f \n", Syndicate);
  printf("Your liquid salary is: $ %.2f \n", LiquidSalary);

  return 0;
}
