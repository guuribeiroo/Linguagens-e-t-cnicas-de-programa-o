#include <stdio.h>
#include <stdlib.h>

/*Exercicio 10 numeros, maior e menor

ESTRUTURA LAÇO DE REPETIÇÃO E VETORES*/

int main(int argc, char *argv[]) {
	int valor[10];              //VETOR: Guarda 10 lugares na memoria consecutivas
	int i, maior,menor;
	
	//Para [for] (incialização; condição; incremento)
	
	for (i = 0; i < 10; i++){
		scanf("%d",&valor[i]);
	}
		
	return 0;
}
