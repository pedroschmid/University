#include <stdio.h>
#include <stdlib.h>

#define T 255

int strlen_recursiva(char *String);

int main()
{
    char Palavra[T];
    printf("ENTRE COM A PALAVRA:"); scanf("\n%[^\n]", Palavra);
    printf("PALAVRA: %s (TAMANHO: %i)\n", Palavra, strlen_recursiva(Palavra));

    return 0;
}

int strlen_recursiva(char *String)
{
    if(*String == '\0')
        return 0;
    else
        return 1 + strlen_recursiva(String + 1);
}
