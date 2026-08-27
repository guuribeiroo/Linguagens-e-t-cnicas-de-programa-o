#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*CODIGO HADUKEN: */

int main(int argc, char *argv[]) {
	int a,b,r,h, soma, sub, multi, div;
	printf("Insira os valores de A e B: ");
	scanf("%d %d", &a,&b);
	
	if(a>0 && b>0){                             //Conexão lógica E == &&
		if(a<10 && b<10){
			if(a==2|| a==3 || a==5 || a==7 && b==2 || b==3 || b==5 || b==7){         //Conexão lógica OU == ||
				r = (a*b)/2;
				h = sqrt((pow(a,2)+pow(b,2)));
				printf("A Area %d da hipotenusa vale: %d",r,h);
				
			}else{
				soma = a+b;
				sub = a-b;
				multi = a*b;
				div = a/b;
				printf("As operacoes basicas de %d e %d = \nsoma:%d \nsub:%d \nmulti:%d \ndiv:%d",a,b,soma,sub,multi,div);
			}
		}else{
			if(a%b==0) printf("SIM"); else printf("NAO");
			}
		}else{
			printf("%d %d",(a*-1),(b*-1));
		}
	return 0;
	}
	

