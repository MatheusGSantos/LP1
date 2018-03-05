#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[51],palavrainv[51];

    printf("Digite a palavra: ");
    fgets(palavra, 50, stdin);

    palavra[strlen(palavra) - 1] = '\0';



    if(strlwr(palavra) == strlwr(strrev(palavra))){
        printf("eh palindroma\n");
    }else{
        printf("eh n\n");
    }

    //printf("%s\n", palavra);

    return 0;
}