#include <stdio.h>
#include <string.h>

#define T 255

int main()
{
    char stringUm[T], stringDois[T];
    int i, j = 0;

    printf("ESCOLHA UMA PALAVRA:\n===>");
    scanf("%s", stringUm);

    for (i = strlen(stringUm) - 1; i >= 0; i--, j++)
    {
        stringDois[j] = stringUm[i];
    }
    //stringDois[j] = '\0';
    printf("PALAVRA = %s\n", stringUm);
    printf("PALAVRA = %s\n", stringDois);
    return 0;

}