#include <stdio.h>
#include <stdlib.h>

/*ESTRUTURA CONDICIONAL*/

int main(int argc, char *argv[]) {
	
	int a,b,c,r;
	
	
	printf("Entre com os valores para serem comparados: "),
	scanf("%d %d %d",&a,&b,&c);
	
	if(a > b){
		r = a;
	}else{
		r = b;
	}
	if(c > r){
		r = c;
	}
	printf("%d eh o maior!",r);
	
	
	int n;
	 
	
	printf("Insira um numero: ");
	scanf("%d",&n);
	
	if(n % 2 == 0){
		printf("O %d eh par",n);
	}else{
		printf("O %d eh impar",n);
	}
return 0;	
}
	
