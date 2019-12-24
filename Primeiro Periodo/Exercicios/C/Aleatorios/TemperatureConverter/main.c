#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>

int main()
{
    float temperature, temperatureValue;
    char switchChoose;

    printf("C to convert celsius to farenheith\nF to convert farenheith to celsius\nK to convert kelvin to celsius\n");
    scanf("%c",&switchChoose);

    switch (switchChoose){
    case 'C':
        printf("Enter celsius value:\n");
        scanf("%f",&temperature);

        temperatureValue = (temperature * 9/5) + 32;
        printf("The celsius value converted to farenheith is: %.2f",temperatureValue);
        break;
    case 'F':
        printf("Enter farenheith value:\n");
        scanf("%f",&temperature);

        temperatureValue = (temperature - 32) * 5/9;
        printf("The farenheith value converted to celsius is: %.2f",temperatureValue);
        break;
    case 'K':
        printf("Enter kelvin value:\n");
        scanf("%f",&temperature);

        temperatureValue =  temperature - 273.15;
        printf("The kelvin value converted to celsius is: %.2f",temperatureValue);
        break;
    }
    return 0;
}
