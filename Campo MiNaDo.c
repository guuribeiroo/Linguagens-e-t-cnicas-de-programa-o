#include <stdio.h>
#include <stdlib.h>
#define bandeira 9
#define bomba 0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int campo[9][9];
	int casaX, casaY;
	int i,j;
	
	printf("Rand = %d",(rand()%10));
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			if(rand()%10 == 0)                     //rand gera um numero "Aleatorio"
			campo[i] [j] = 0;
		}
}	
	//Limpar a memoria da matriz inserindo 9 em todas as posições	
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			campo[i][j] = 9;
		}
		
	}
	//Preencher com bombas nosso jogo
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			if(rand()%10 == 0)                     
			campo[i] [j] = 0;
		}
	}
	
	printf("\nCampo MiNaDo\n---------------------------------------------------------------------------------\n");
	for(i=0; i<9; i++){
		printf("\t \t");
		for(j=0; j<9; j++){
			if(campo[i][j] == 0)printf("|9");
			else printf("|%d",campo[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------------------------------------------------------------");
	return 0;
}
