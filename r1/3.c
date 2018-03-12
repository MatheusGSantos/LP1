
#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,tam;
    char string[50], str[50] = {0};

    printf("Digite a sua palavra: ");
    gets(string);

    tam = strlen(string);
    j = tam-1;


    for(i = 0; i < tam; i++)
    {
        str[i] = string[j];
        j--;
    }

    if(strcmp(str, string) == 0)
        printf("Eh palindromo\n");
    else
        printf("Nao eh palindromo\n");

    return 0;
}
