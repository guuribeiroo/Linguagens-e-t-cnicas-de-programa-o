#include <stdio.h>


/*Crie um programa que peça ao usuario para digitar 10 numeros que sejam 
inteiros e positivos, ignorando os negativos e mostre na tela o resultado
da soma e da media desses valores (usando While e Do - While)*/
int main()
{
  int soma,i,n;
  i = 0;
  soma = 0;
  while(i < 10){
    scanf("%d",&n);
    if(n >= 0){
        soma += n;
        i++;
    }
  }
  printf("Soma = %d\nMedia = %d",soma, (soma/10));
}
