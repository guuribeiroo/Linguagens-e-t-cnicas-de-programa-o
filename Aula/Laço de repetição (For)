#include <stdio.h>
#include <stdlib.h>

/*Exercicio 10 numeros, maior entrre os 5 primeiros e menor que todos
ESTRUTURA LAÇO DE REPETIÇÃO E VETORES*/

int compara_maior(int a, int b){                 //Função para comparação
    if(a<b)return b;
    else return a;
}
int compara_menor(int a, int b){
    if(a<b)return a;
    else return b;
}
int main(int argc, char *argv[]) {
	int valor[10];                         //VETOR: Guarda 10 lugares na memoria consecutivas em somente uma variavel
	int i, maior,menor;
	
	for (i = 0; i < 10; i++){              //Para [for] (incialização; condição; incremento)
		scanf("%d",&valor[i]);             //Scan para guardar o endereço do que for resposta
	}
    //Assumir que a primeira casa (valor[0] é o maior, para a comparação dar certo)                          
    for (i=1, maior = valor[0]; i <= 4; i+=2){         //Começa do i = 1 pois ja assumimos que o maior esta na primeira casa, entao economizamos um laço
        int temp = compara_maior(valor[i], valor[i+1]);      //Temp para n perder os dados da primeira casa que assumimos que é maior
        maior = compara_maior(maior,temp);                   //Comparação para analisar o maior entre os 5
                                                    
    } 
    printf("\nMaior entre os 5 primeiros: %d",maior);

    for (i=5, menor = valor[5]; i <= 10; i+=2){        
        int temp = compara_menor(valor[i], valor[i+1]);    
        menor = compara_menor(menor,temp);
    }
    printf("\nMenor número entre os 5 ultimos: %d",menor);
	return 0;
}
