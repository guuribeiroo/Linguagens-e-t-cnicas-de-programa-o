#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {


/*LISTA DE EXERCÍCIOS 1
EXERCICIO 1:*/
		
	/*int primeiro, segundo, aux;
	
	printf("Insira o primeiro valor: \n");
	scanf("%d", &primeiro);
	printf("Insira o segundo valor: \n");
	scanf("%d", &segundo);
	
	aux = primeiro;         
	primeiro = segundo;            
	segundo = aux;                  
	
	printf("%d \n%d",primeiro,segundo);*/
	
	
	
	
/*EXERCÍCIO 2:
	
	double valor;
	
	printf("Insira um valor: \n");
	scanf("%lf", &valor);
	
	printf("O numero em notacao cientifica : %e \n", valor);*/
		
	
/*EXERCÍCIO 3:	

	int n, bit64, bit32, bit16, bit8, bit4, bit2, resultado;
	printf("Insira um numero para a conversao: \n");
	scanf("%d",&n);                      //& = endereço de memoria
	
	bit64 = n % 2;                      //módulo de n por 2
	resultado = n/2;
	
	bit32 = resultado % 2;                      
	resultado = resultado/2;
	
	bit16 = resultado % 2;                      
	resultado = resultado/2;
	
	bit8 = resultado % 2;                      
	resultado = resultado /2;
	
	bit4 = resultado % 2;                      
	resultado = resultado /2;
	
	bit2 = resultado % 2;                      
	resultado = resultado /2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, resultado%2, bit2, bit4, bit8, bit16,bit32, bit64);
	//Fiz com você em aula//
	*/
	

	
/* EXERCÍCIO 4:
	
	float salario,vendas,comissao;
	
	printf("Insira o salario fixo desse funcionario: \n");
	scanf("%f",&salario);
	printf("Insira a quantidade de vendas dos funcionarios: \n");
	scanf("&f",&vendas);
	
	comissao = salario + (vendas *0.15);
	
	printf("O salario total com o bonus de comissao é = %.2f", comissao);*/
	
	
// EXERCICIO 5://
	/*float a,b,c,d,soma,media,produtorio;
	
	
	printf("Insira um valor: \n");
	scanf("%f",&a);
	printf("Insira um valor: \n");
	scanf("%f",&b);
	printf("Insira um valor: \n");
	scanf("%f",&c);
	printf("Insira um valor: \n");
	scanf("%f",&d);
	
	soma = a+b+c+d;
	media = (a*b*c*d)/4;
	produtorio = a*b*c*d;
	
	printf("A soma dos numeros vale = %f\n",soma);
	printf("A media dos numeros vale = %f\n",media);
	printf("A produtorio dos numeros vale = %f\n",produtorio);*/
	
/*EXERCICIO 6
	int dias,anos,meses,diasvivo;
	printf("Insira a sua idade em dias: \n");
	scanf("%d", &diasvivo);
	
	anos = diasvivo /365;
	diasvivo = diasvivo % 365;
	meses = diasvivo / 30;
	diasvivo = diasvivo % 30;
	
	printf("A sua idade em anos %d, em meses %d, e em dias %d",anos,meses,diasvivo);*/


/*EXERCICO 7
    float volume,raio,pi;
    pi = 3.14159;
    printf("Insira o valor do raio da esfera: \n");
    scanf("%f",&raio);

    volume = (4.0/3) * pi * (raio *raio *raio);
    printf("O volume da esfera de raio %.3f vale = %.3f",raio,volume);*/
	
	
	
/*EXERCICIO 8
	float x1,y1,x2,y2,d, p1, p2;
	
	printf("Insira um valor para x1 e y1: \n");
	scanf("%f %f",&x1,&y1);
	
	printf("Insira um valor para x2 e y2: \n");
	scanf("%f %f",&x2,&y2);
	
	p1 = pow(x2-x1, 2);
	p2 = pow(y2-y1,2);
	
	d = sqrt(p1+p2);
	
	printf("A distancia euclidiana = %.3f",d);
	//Fiz com você em aula//
	*/
	


	
	
	return 0;
}
