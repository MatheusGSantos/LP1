#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int n){
    if (n == 1 || n == 2){
        return 1;
    }

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
    int numero, i;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++){
        printf("%d\n", Fibonacci(i));
    }
    return 0;
} 
