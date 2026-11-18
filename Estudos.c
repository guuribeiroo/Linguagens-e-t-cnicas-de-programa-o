#include <stdio.h>
int main()
{
  //Exercicios 1-  

   int n[10];
   int i;
   int par = 0;
   int impar = 0;
   int soma = 0;

   for(i = 0; i < 10; i++){
    scanf("%d",&n[i]);
    if(n[i] % 2 == 0){
        par = par + 1;
        soma = soma + n[i];
    }else{
        impar = impar + 1;
    }
   }
   printf("Pares: %d",par);
   printf("\nImpares: %d",impar);
   printf("\nSoma dos pares: %d",soma);
}



//Exercicio 2//
/*  int n;
   int i;
   scanf("%d",&n);
   for(i = 0; i < 11; i++){
    printf("\n%d X %d = %d",n,i,n*i);
   }

//Exercicio 3//

   int soma = 0;
   int n;
   while(n!=0){
    printf("Digite um número (0 para soma): ");
    scanf("%d",&n);
    soma += n;
   }

   printf("Soma: %d",soma);


//Exercicio 4//
  int n;
  int divisao = 0;
  int teste = 0;
  int i = 2;

    scanf("%d",&n);
    while(i < n && divisao == 0){
        teste++;
        if(n % i == 0){
            divisao = i;
        }
        i++;
    }
    if(divisao == 0){
        printf("%d É primo",n);
    }else{
        printf("%d Não é primo",n);
    }
    printf("\nDivisões testadas: %d",teste);
*/
