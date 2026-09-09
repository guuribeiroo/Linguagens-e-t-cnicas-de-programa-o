#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,aux1,aux2,aux3,aux4,aux5,aux6;    //aux3 = primeiro numero pos -
                                                                                
	printf("Insira seu cpf com espaços: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
	
	printf("\n%d %d %d . %d %d %d . %d %d %d - %d %d",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11);
	
	aux1 = (n1*10)+(n2*9)+(n3*8)+(n4*7)+(n5*6)+(n6*5)+(n7*4)+(n8*3)+(n9*2);
	aux2 = aux1 * 10;
	aux3 = aux2 % 11;
	aux4 = (n1*11)+(n2*10)+(n3*9)+(n4*8)+(n5*7)+(n6*6)+(n7*5)+(n8*4)+(n9*3)+(aux3*2);
	aux5 = aux4 * 10;
	aux6 = aux5 % 11;
	if(aux6 == 10){
		aux6 = 0;
	}
	
	
	
	if(aux3 == n10 && aux6 == n11){
		printf("\nSeu CPF eh valido!!!");
	}else{
		printf("\nSeu CPF eh invalido");
	}
	

	return 0;
}
