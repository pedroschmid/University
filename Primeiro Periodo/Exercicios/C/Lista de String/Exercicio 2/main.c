#include <stdio.h>
#include <string.h>

#define T 255

int main() 
{
    char String[T];
    int Count = 0;

    printf("DIGITE UMA PALAVRA:\n==>");
    scanf("\n%[^\n]", String); // Essa macumba lê os espaços!

    for (int i = 0; i <= strlen(String); i++) 
    {
        if (String[i] == ' ')
        {
            Count++;
        }
    }

    printf("O TOTAL DE ESPACOS FORAM = %d", Count);
    return 0;
}