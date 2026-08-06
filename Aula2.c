#include <stdio.h>
#include <stdlib.h>

/*VARIÁVEIS função de guardar dados/casas na memoria 
-Int- trata-se de numeros inteiros (-infinito ate +infinito)
-Float- trata-se de números com virgula
-Char- Valor de uma unica letra/caracter
-Void- Vazio
*/

int main(int argc, char *argv[]) {
	float a,b,c,d,e,f;
	a = 8;
	b = 19;
	c = a+b;
	d = a-b;
	e = a*b;
	f = a/b;
	
	
	printf("A soma de %f + %f = %f\n", a,b,c );	      /*%d se refere a um identificador de onde o printf vai colocar o dado,o mesmo serve para o float (%f) e o char(%c)*/
    printf("A subtrção de %f - %f = %f\n", a,b,d);                                                   	
	printf("A multiplicacao de %f x %f = %f\n", a,b,e);
	printf("A divisao de %f / %f = %f\n", a,b,f);
	return 0;
}
