#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[26];
  char genero[20];
  int nIntegrantes;
  int posRank;
}tBanda;


void preencheBandas(tBanda *bandas){
  int i;

  for(i=0; i < 5; i++){
    printf("Nome da Banda: ");
    fgets(bandas->nome,26,stdin);
    bandas->nome[strlen(bandas->nome) - 1] = '\0';

    printf("Genero: ");
    fgets(bandas->genero,20,stdin);
    bandas->genero[strlen(bandas->genero) - 1] = '\0';

    printf("Numero de Integrantes: ");
    scanf("%d", &bandas->nIntegrantes);
    getchar();

    printf("Posicao no Ranking: ");
    scanf("%d", &bandas->posRank);
    getchar();
    
    printf("\n");
    bandas++;
  }
  
}

void exibeDados(tBanda *banda){
	int rank;
	
	printf("Informe o ranking da banda: ");
	scanf("%d", &rank);
	getchar();
	
	while(1){
		if(banda->posRank == rank){
			printf("Nome: %s\n",banda->nome);
			printf("Genero: %s\n",banda->genero);
			printf("Numero de Integrantes: %d\n",banda->nIntegrantes);
			printf("Posicao : %d\n",banda->posRank);		
			break;
		}		
		banda++;
	}

}

void exibeGenero(tBanda *banda){
	char g[20],i;
	
	printf("Informe o genero: ");
	fgets(g,20,stdin);
	g[strlen(g) - 1] = '\0';
	
	for(i=0; i < 5; i++){
	  if(strcmp(banda->genero,g) == 0){
	      printf("%s\n", banda->nome);
	  }
	  banda++;  
	}
}

int procuraBanda(tBanda *banda){
	char n[26],i;
	
	printf("Informe o nome da banda a ser buscada: ");
	fgets(n,26,stdin);
	n[strlen(n) - 1] = '\0';
	
	for(i=0; i < 5; i++){
	  if(strcmp(n,banda->nome) == 0){
	      return 1;
	  }
	      
	  banda++;  
	}
	return 0;
}

int main(){
  tBanda Bandas[5];
  int i;
  
  preencheBandas(Bandas);
  printf("\n");
  exibeDados(Bandas);
  printf("\n");
  exibeGenero(Bandas);
  printf("\n");
  if(procuraBanda(Bandas)){
      printf("Eh banda favorita\n");
  }else
      printf("Nao eh banda favorita\n");
  
  return 0;
}
