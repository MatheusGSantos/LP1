#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char sexo[10], menor, maior;
    double altura[10];
    double somaM = 0, somaF = 0, tF = 0, tM = 0;
    int i;


    for(i = 0; i < 10; i++){
        scanf("%lf", &altura[i]);
        scanf("%*c%c", &sexo[i]);


        if(i == 0){
            menor = i;
            maior = i;
        }else{
            if(altura[i] > altura[maior]){
                maior = i;
            }
            if(altura[i] < altura[menor]){
                menor = i;
            }
        }
        if(sexo[i] == 'F'){
            somaF += altura[i];
            tF++;
        }
        if(sexo[i] == 'M'){
            somaM += altura[i];
            tM++;
        }

    }

    printf("Maior altura tem sexo: %c\n", sexo[maior]);
    printf("Menor altura tem sexo: %c\n", sexo[menor]);

    printf("Media de altura feminina: %.1lf\n", somaF/tF);
    printf("Media de altura maculina: %.1lf\n", somaM/tM);

    printf("Total de individuos do sexo masculino: %.0lf\n", tM);
    printf("Total de individuos do sexo feminino: %.0lf\n", tF);



    return 0;
}
