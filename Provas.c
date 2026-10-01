#include <stdio.h>
#include <stdlib.h>



int verifica(int n);
    int verifica(int n){
        if ((n % 2) != 0)
        if ((n % 5) == 0)
            return 1;
        else 
        return 0;
}

int prova1(){
	int questao;
	printf("Número da questao:");
	scanf("%d",&questao);
{
   
   if(questao == 0){
   
   int n1,n2,n3,n4;
	printf("Insira os numeros a serem analisados: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if (verifica(n1)) printf("%d\n",n1);
    if (verifica(n2)) printf("%d\n",n2);
    if (verifica(n3)) printf("%d\n",n3);
    if (verifica(n4)) printf("%d\n",n4);
	}
}
{
   if(questao ==1){
   int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    
    printf("Legendario, são %d mochilas para seus itens", n_mochilas);
	 }
}

{
		if(questao == 2){
		
		float valor, resultado;
        int origem, destino;

        printf("Digite o valor: ");
        scanf("%f", &valor);

        printf("Digite o codigo de origem: ");
        scanf("%d", &origem);

        printf("Digite o codigo de destino: ");
        scanf("%d", &destino);

        if (origem == 1 && destino == 2) {
            resultado = valor * 1.8 + 32;
            printf("Resultado: %.2f F\n", resultado);
        }

        else if (origem == 2 && destino == 1) {
            resultado = (valor - 32) / 1.8;
            printf("Resultado: %.2f C\n", resultado);
        }

        else if (origem == 1 && destino == 3) {
            resultado = valor + 273.15;
            printf("Resultado: %.2f K\n", resultado);
        }

        else if (origem == 3 && destino == 1) {
            resultado = valor - 273.15;
            printf("Resultado: %.2f C\n", resultado);
        }

        else if (origem == 4 && destino == 5) {
            resultado = valor / 1609.34;
            printf("Resultado: %.2f mi\n", resultado);
        }

        else if (origem == 5 && destino == 4) {
            resultado = valor * 1609.34;
            printf("Resultado: %.2f m\n", resultado);
        }

        else if (origem == 8 && destino == 9) {
            resultado = valor * 2.205;
            printf("Resultado: %.2f lb\n", resultado);
        }

        else if (origem == 9 && destino == 8) {
            resultado = valor / 2.205;
            printf("Resultado: %.2f kg\n", resultado);
        }

        else if (origem == 10 && destino == 11) {
            resultado = valor * 1.609;
            printf("Resultado: %.2f km/h\n", resultado);
        }

        else if (origem == 11 && destino == 10) {
            resultado = valor / 1.609;
            printf("Resultado: %.2f mph\n", resultado);
        }

        else {
            printf("Conversao invalida!\n");
        }
    }

    else {
        printf("Questao invalida!\n");
		}
}
}

	void prova2(){
			int questao;
	printf("Número da questao:");
	scanf("%d",&questao);
	
		if(questao == 0){
		int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
}    
    
    
    if(questao == 1){
    	
		int a,b,c,aux;
    	printf("Insira os valores de A B C: ");
    	scanf("%d %d %d",&a,&b,&c);
    	
    	
    	if(a == b || b == c || c == a){
    		printf("Os numeros precisam ser distintos");
		}else if ( a < b && b < c){
			printf("%d %d %d",a,b,c);
		}else if (b < a && a < c){
			printf("%d %d %d",b,a,c);
		}else if (a < c && c < b){
			printf("%d %d %d",a,c,b);
		}else if (b < c && c < a){
			printf("%d %d %d",b,c,a);
		}else if (c < a && a < b){
			printf("%d %d %d",c,a,b);
		}else if (c<b && b<a){
			printf("%d %d %d",c,b,a);
		}
}    
    
    	if(questao == 2){
		float op1,op2;
    	int cod;
    	printf("Insira os operandos: \n");
    	scanf("%f %f",&op1,&op1);
    	printf("Insira o operador\n1->\n2-<\n3-==\n4-!=");
    	scanf("%d",cod);
    	
    	 if (cod == 1) {
        if (op1 > op2) {
            printf("VERDADEIRO!");
        } else {
            printf("FALSO!");
        }
    }
    else if (cod == 2) {
        if (op1 < op2) {
            printf("VERDADEIRO!");
        } else {
            printf("FALSO!");
        }
    }
    else if (cod == 3) {
        if (op1 == op2) {
            printf("VERDADEIRO!");
        } else {
            printf("FALSO!");
        }
    }
    else if (cod == 4) {
        if (op1 != op2) {
            printf("VERDADEIRO!");
        } else {
            printf("FALSO!");
        }
    }
    else {
        printf("OPERADOR INVALIDO!");
    }
		}
}
	void prova3(){
			int questao;
	printf("Número da questao:");
	scanf("%d",&questao);
	
		 if(questao == 0){
		 int n1, n2, n3, n4, n5;

        printf("Digite 5 numeros inteiros: ");
        scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

        if (n2 - n1 == 1){
            printf("%d e %d\n", n1, n2);
        }
        if (n3 - n2 == 1){
            printf("%d e %d\n", n2, n3);
        }
        if (n4 - n3 == 1){
            printf("%d e %d\n", n3, n4);
        }
        if (n5 - n4 == 1){
            printf("%d e %d\n", n4, n5);
        }
}        
        if(questao == 1){
		float peso, altura, imc;

        printf("Insira o peso: ");
        scanf("%f", &peso);

        printf("Insira a altura: ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        printf("IMC: %.2f\n", imc);

        if (imc < 18.5){
            printf("Abaixo do peso\n");}
        else if (imc <= 24.9){
            printf("Normal\n");}
        else if (imc <= 29.9){
            printf("Acima do peso\n");}
        else{
            printf("Obeso\n");}
    }
}
	}
	
int main(int argc, char *argv[]) {
	
	int op;
	printf("Escolha a prova que deseja realizar:");
	scanf("%d",%op);
	
	switch(op){
		case 1:
		prova1();
		break;
		
		case 2:
		prova2();
		break;
		
		case 3:
		prova3();
		break;
	}
	return 0;
	
}
