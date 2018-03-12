#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    char endereco[50];
    char matricula[10];
    char curso[30];
}tAluno;

    tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char *curso){
    int i, count = 0;

    for(i=0;i<100;i++){
        if(strcmp(gAlunos[i].curso, curso) == 0)
            count++;
    }
    return count;

}

int main(void){

    char op[30];
    int n;

    strcpy(op, "Computacao");

    strcpy(gAlunos[0].curso, "Computacao");
    strcpy(gAlunos[1].curso, "Computacao");
    strcpy(gAlunos[2].nome, "Fisica");

    n = consultaAlunosPorCurso(op);

    printf("Numero de alunos no curso: %d", n);

    return 0;
}
