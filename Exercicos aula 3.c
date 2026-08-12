#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592                             //Definindo um valor que não é variável
/* EXERCÍCIOS AULA 3 
EX) Calculo de de area recebendo o raio*/

int main(int argc, char *argv[]) {
	
	float area, raio, r2;                       // declaração de variaveis 
	
	printf("Insira o raio do circulo: \n");       //Print para o usuario colocar o valor do raio
	scanf("%f", &raio);                         //Leitura do que o usuario colocar o valor para aoperação 
	r2 = raio * raio;                           //poderia ser tbem raio *= raio pois é a mesma operação 
	area = pi * r2; 
	printf("O A Area do circulo de raio %f = %f\n", raio, area);
	
	
	
	
	float basemaior, basemenor, altura, areab;
	
	printf("\nAgora vamos calcular a area do trapezio!\n ");
	
	printf("Insira a medida da base maior: \n");
	scanf("%f" , &basemaior);
	
	printf("Insira a medida da base menor: \n");
	scanf("%f" , &basemenor);
	
	printf("Insira a medida da altura: \n");
	scanf("%f" , &altura);
	
	areab = ((basemaior+basemenor)*altura) /2;
	
	printf("A Area do trapezio vale = %f\n",areab);
	
	return 0;
}
