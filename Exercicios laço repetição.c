#include <stdio.h>

//Lista de Exercicios//

int main()
{
    //int i, j, k, n, r;

    //Vamos relembrar algumas estruturas que vimos//

    /*Laço FOR repete um conjunto de instruções, de um valor inicial
    (Inicialização), até uma determinada condição, realizando uma operação 
    (Incremento) a cada execução
    for(i = 0, j = 1; i < 10; i++, j--){
        printf("\nEsse é o laço FOR");
    }
*/
    /*Laço WHILE (enquanto), que se testa uma condição é verdadeira, caso seja
    executa um bloco de comandos repetindo o processo equanto a condição for avalidada
    com verdadeira
    while(i < 10){
        printf("\nLaço WHILE",i );
        if(n%2 == 0) i++;
        n++;
    }
 */    
    /*Laço DO WHILE, semelhante ao laço while, porem antes de realizae a verificação
    ele executa o conjunto de intruções para aposa execução, realizar a verificação da condição
    do{
        printf("\nLaço DO WHILE", i);
        if(n%2 == 0)i++;
        n++;
    }while(i<10);
*/
//EXERCICIO 1:
/*Elabore um programa que permitaa entrada de 3 valores
e conte do primeiro valor inserido, ate o segundo valor,
com o passo da contagem dado pelo terceiro valor*/
//exemplo -> 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7//

/*int num[3],i;
    
    for(i = 0; i < 3; i++){
        scanf("%d", &num[i]);   
    }
    for( int i = num[0]; i<=num[1]; i = i +num[2]){
        printf("\n%d", i);
    }*/

int ini,fim,passo;
printf("Insira o valor inicial, final e passo: \n");
scanf("%d %d %d",&ini,&fim,&passo);

if(ini<fim){
    while(ini<fim){
        printf("\n%d",ini);
        ini += passo;
    }
}else{
    while(ini>fim){
        printf("\n%d",ini);
        ini -= passo;
    }
}

//EXERCICIO 2://
/*Faça um progra,a que receba um numero n e realize a soma
dos n primeiros termos da sequencia definida 
[S= 1/2; 1/4; 1/8; 1/16...N]*/






//EXERCICIO 3://
/*Crie um programa que eciba na tela, o triangulo de pascal
v*/




}
