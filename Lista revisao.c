#include <stdio.h>
#include <stdlib.h>

float calc_inss(float salario){
	if (salario <= 1412.00) return salario * 0.075;
	else if(salario <= 2666.68) return salario * 0.09;
	else if(salario <= 4000.03) return salario * 0.12;
	else return salario * 0.14;
}

float calc_irpf(float salario){
	
	
	if (salario < 2259.20) return 0;
	else if(salario >= 2259.21 && salario <= 2826.65) return (salario * 0.075) - 169.44 ;
	else if(salario <= 3751.05 && salario >= 2826.66 )return (salario * 0.15) - 381.44 ;
	else if(salario <= 4664.68 && salario >= 3751.06)return (salario * 0.225) - 662.77;
	else return (salario* 0.275) - 896.00;
}
int main(int argc, char *argv[]) {
	
	/*float valorhora, horas,sal_bruto,sal_base,sal_liquido,desconto_inss,desconto_irpf;
	printf("Insira o valor das horas de trabalho: \n");
	scanf("%f",&valorhora);
	printf("Insira a quantidade de horas trabalhadas: ");
	scanf("%f",&horas);
	
	sal_bruto = valorhora * horas;
	
	desconto_inss = calc_inss(sal_bruto);

    sal_base = sal_bruto - desconto_inss;  

    desconto_irpf = calc_irpf(sal_base);

    sal_liquido = sal_bruto - desconto_inss - desconto_irpf;

    printf("\n==============RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)==============\nSalário bruto: R$ %.2f\n(-)Desconto INSS: R$: %.2f\n(-)Desconto IRPF: R$: %.2f\n============== LIQUIDO A RECEBER: R$ %.2f ==============",sal_bruto,desconto_inss,desconto_irpf,sal_liquido);
*/

/* 
{
   int valor, restante;
    int n100,n50,n10,n5,n2,n1;
    printf("Digite o valor do saque: \n");
    scanf("%d",&valor);
    
    restante = valor;

    n100 = restante / 100;
    restante = restante% 100;

    n50 = restante / 50;
    restante = restante % 50;

    n10 = restante / 10;
    restante = restante % 10;

    n5 = restante / 5;
    restante = restante % 5;

    n2 = restante / 2;
    restante = restante % 2;

    n1 = restante / 1;
    restante = restante % 1;

    printf("Notas de 100: %d\nNotas de 50: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 2: %d\nNotas de 1: %d",n100,n50,n10,n5,n2,n1);
*/

/*#define g 9.8
#define k 0.5
#define pi 3.14

    float v0,angulo,rad;
    printf("Insira a Velocidade inicial do projetil e o Angulo: ");
    scanf("%f %f",&v0,&angulo);

    rad = angulo *(pi / 180);

  */  

return 0;
}
	return 0;
}
