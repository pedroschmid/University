#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

int main()
{
    float notesValue, totalMoney;
    int switchValue;
    char originalMoney[10], convertedMoney[10];

    printf("Enter original money type\n");
    scanf("%s9",&originalMoney);

    printf("Enter the type of money you want to convert\n");
    scanf("%s9",&convertedMoney);

    if (strcmp(originalMoney, "REAL") == 0 && strcmp(convertedMoney, "DOLLAR") == 0){
        switchValue = 1;
    } else if (strcmp(originalMoney, "REAL") == 0 && strcmp(convertedMoney, "LIBRAS") == 0){
        switchValue = 2;
    } else if (strcmp(originalMoney, "DOLLAR") == 0 && strcmp(convertedMoney, "REAL") == 0){
        switchValue = 3;
    } else if (strcmp(originalMoney, "DOLLAR") == 0 && strcmp(convertedMoney, "LIBRAS") == 0){
        switchValue = 4;
    } else if (strcmp(originalMoney, "LIBRAS") == 0 && strcmp(convertedMoney, "REAL") == 0){
        switchValue = 5;
    } else if (strcmp(originalMoney, "LIBRAS") == 0 && strcmp(convertedMoney, "DOLLAR") == 0){
        switchValue = 6;
    } else {
        printf("You have chosen an invalid conversion option!");
    }

    switch (switchValue) {
    case 1:
        printf("enter the value in reais:\n");
        scanf("%f",&notesValue);

        totalMoney = notesValue / 4.01;

        printf("The value in reais converted to dollar is: %.2f",totalMoney);
        break;
    case 2:
        printf("enter the value in reais:\n");
        scanf("%f",&notesValue);

        totalMoney = notesValue / 4.86;

        printf("The value in reais converted to libras is: %.2f",totalMoney);
        break;
    case 3:
        printf("enter the value in dollar:\n");
        scanf("%f",&notesValue);

        totalMoney = notesValue * 4.01;

        printf("The value in dollar converted to reais is: %.2f",totalMoney);
        break;
    case 4:
        printf("enter the value in dollar:\n");
        scanf("%f",&notesValue);

        totalMoney = notesValue / 0.82;

        printf("The value in dollar converted to libras is: %.2f",totalMoney);
        break;
    case 5:
        printf("enter the value in libras:\n");
        scanf("%f",&notesValue);

        totalMoney = notesValue * 4.86;

        printf("The value in libras converted to reais is: %.2f",totalMoney);
        break;
    case 6:
        printf("enter the value in libras:\n");
        scanf("%f",&notesValue);

        totalMoney = notesValue / 1.21;

        printf("The value in libras converted to dollar is: %.2f",totalMoney);
        break;
    }
    return 0;
}
