#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main()
{
    char input, vowels[] = "aeiou", upperVowels[] = "AEIOU", consonants[] = "bcdfghjklmnopqrstuvwxyz", upperConsonants[] = "BCDFGHJKLMNPQRSTVWXYZ";

    printf("Enter the symbol: ");
    scanf("%c", &input);

    if (strchr(vowels, input) != 0){
        printf("vowels!");
    }
    else if (strchr(upperVowels, input) != 0){
        printf("Upper vowels!");
    }
    else if (strchr(consonants, input) != 0){
        printf("Consonants!");
    }
    else if (strchr(upperConsonants, input) != 0){
        printf("Upper Consonants!");
    }
    else{
        printf("You entered another character!");
    }
    return 0;
}
