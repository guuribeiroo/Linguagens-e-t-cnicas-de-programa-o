#include <stdio.h>
#include <stdlib.h>

/*lista 2*/

int main(int argc, char *argv[]) {
/**/	
	//ex 10//
	int a,b,c,maior,maior_temp;
	printf("Insira os valores a serem comparados: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	//conta
	maior_temp = (a + b + abs(a - b))/2;                // abs = função guardada na biblioteca stdlib.h// maior_temp é o maior temporariamente, ate ter mais uma comparação necessaria//
	maior = (maior_temp + c +abs(maior_temp - c))/2;    
	//sempre que houver uma comparação sempre sera de 2 elementos, portanto se houver mais que dois elementos você compara os resultados dos mesmos
	
	printf("O maior entre |%d|%d|%d| e o %d\n",a , b, c, maior);
	
	
//AGORA PARA 4 VALORES//
	
	
	int a1,b1,c1,d1,maiortemp1,maiortemp2,maior1;
	printf("Insira os valores a serem comparados: \n");
	scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
	
	//compara os dois primeiro
	maiortemp1 = (a1+b1+abs(a1-b1))/2;
	//compara os dois ultimos 
	maiortemp2 = (c1+d1+abs(c1-d1))/2;
	//compara os dois maiores valores entre as duas comparações
	maior1 = (maiortemp1 + maiortemp2 + abs(maiortemp1 - maiortemp2))/2;
	
	printf("O maior entre |%d|%d|%d|%d| e o %d\n",a1 , b1, c1 ,d1, maior1);
	return 0;
		
}
