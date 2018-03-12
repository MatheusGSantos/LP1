#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Escadinha(char *string)
{
    int i, j, tam;

    tam = strlen(string);

    for(i = 1; i <= tam; i++){
        for(j = 0; j < i; j++){
            printf("%c", string[j]);
        }
        printf("\n");
    }
}

int main()
{
    char string[50];

    gets(string);

    Escadinha(string);

    return 0;
}
