#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define T 255

int main()
{
    
    srand(time(NULL));

    char String[T], Criptografia[T], Letra;
    int i, j;

    printf("DIGITE UMA PALAVRA:\n==>");
    scanf("\n%[^\n]", String);

    strcpy(Criptografia, String);

    for (i = 0; String[i] != '\0'; i++)
    {
        j = rand() % strlen(String);
        Criptografia[i] = String[j];
        printf("%s", Criptografia[i]);
    }

    /*
    int Matriz[3][3];

    for (int i = 0,  j = 0; i < (3 * 3) && j < (3 * 3); i++, j++)
    {
        Matriz[i][j] = rand() % 10;
        printf("%3d", Matriz[i][j]);
    }
    */
    
    return 0;
}