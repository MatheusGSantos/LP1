#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioB, salarioL = 0, desconto = 0;

    printf("Informe o salario bruto: " );
    scanf("%lf", &salarioB);

    if (salarioB < 420){
        desconto = salarioB * (0.08);
        salarioL = salarioB * (0.92);

    }else if (salarioB >= 420 && salarioB < 1350){
        desconto = salarioB * (0.09);
        salarioL = salarioB * (0.91);

    }else{
        desconto = salarioB * (0.10);
        salarioL = salarioB * (0.90);

    }

    printf("Desconto: %.2lf\nSalario Liquido: %.2lf\n",desconto, salarioL);

    return 0;
}