#include <stdio.h>
#include <stdlib.h>
/*Faça um programa e leia ma palavra
e verifique se ela e um palindromo

Entrada: ABBA
Saída: eh um palindromo

palíndromo é qualquer palavra, frase, número ou 
sequência de caracteres que é lida exatamente da 
mesma forma tanto da esquerda para a direita quanto da 
direita para a esquerda*/

int main()
{
    char palavra[30];
    int i,j,palindromo;
    scanf("%s",&palavra);
    printf("Verificando %s\n",palavra);

    for(i = 0; i<30 && palavra[i] != '\0';i++)     //\0 MOSTRA AONDE ACABA EXATAMENTE UMA STRING
    for(j = i-1 , i = 0; i < j; i++, j--){
        if(palavra[i] == palavra[j]) palindromo = 1;
        else palindromo = 0;
            break;      
}
if(palindromo)printf("é um palíndromo");
else printf("Erro");
return 0;

}
