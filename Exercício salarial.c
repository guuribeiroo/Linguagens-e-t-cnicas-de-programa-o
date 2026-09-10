#include <stdio.h>
#include <stdlib.h>

float calc_inss(float salario){
	if (salario <= 1412.00) return salario * 0.075;
	else if(salario <= 2666.68) return salario * 0.09;
	else if(salario <= 4000.03) return salario * 0.12;
	else return salario * 0.14;
}

float calc_irpf(float irpf){
	
	
	if (salario < 2259.20) return salario;
	else if(salario < 2826.65) return (salario * 0.075) ;
	else if(salario < 3751.05)return (salario * 0.15) ;
	else if(salario < 4664.68)return (salario * 0.225);
	else return (salario* 0.275);
}
int main(int argc, char *argv[]) {
	
	float valorhora, horas,sal_bruto,sal_base,sal_liquido,desconto_inss,;
	printf("Insira o valor das horas de trabalho: \n");
	scanf("%f",&valorhora);
	printf("Insira a quantidade de horas trabalhadas: ");
	scanf("%f",&horas);
	
	sal_bruto = valorhora * horas;
	
	desconto_inss = calc_inss(salbruto)
	
	
	
	return 0;
}
