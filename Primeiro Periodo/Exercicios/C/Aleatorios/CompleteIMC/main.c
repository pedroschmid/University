#include <stdio.h>

#include <math.h>

int main() {
    float IMC, Height, Weight;

    printf("Enter the height value:\n");
    scanf("%f",&Height);

    printf("Enter the weight value:\n");
    scanf("%f",&Weight);

    IMC = Weight / pow(Height, 2);

    if (IMC <= 18.5){
        printf("Your IMC is: %2.f\n", IMC);
        printf("Thinness");
    } else if (IMC > 18.5 && IMC <= 25){
        printf("Your IMC is: %2.f\n", IMC);
        printf("Healthy");
    } else if (IMC > 25 && IMC <= 30){
        printf("Your IMC is: %2.f\n", IMC);
        printf("Overweight");
    } else if (IMC > 30 && IMC <= 35){
        printf("Your IMC is: %2.f\n", IMC);
        printf("Obesity 1");
    } else if (IMC > 35 && IMC <= 40){
        printf("Your IMC is: %2.f\n", IMC);
        printf("Obesity 2 (Several)");
    } else {
        printf("Your IMC is: %2.f\n", IMC);
        printf("Obesity 3 (Morbid)");
    }
    return 0;
}
