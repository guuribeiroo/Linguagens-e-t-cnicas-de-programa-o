#include <stdio.h>
#include <stdlib.h>

void exc3(){
    float largura,comprimento,area,perimetro;
    printf("Insira a largura do triangulo:");
    scanf("%f",&largura);
    printf("Insira o comprimento do triangulo: ");
    scanf("%f",&comprimento);

    area = largura * comprimento;
    perimetro = (largura + comprimento) * 2;

    printf("A Area vale: %.2f \n",area);
    printf("O Perimetro vale: %.2f ",perimetro);

}
void exc4(){
    float nota1,nota2,nota3,situacao,media;
    printf("Insira a nota 1: ");
    scanf("%f",&nota1);
    printf("Insira a nota 2: ");
    scanf("%f",&nota2);
    printf("Insira a nota 3: ");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;
    
    if(media >= 6){
        printf(" APROVADO! Sua média foi: %.2f",media);
    }else printf("REPORVADO! Sua média foi: %.2f",media);

}

int main()
{
    int exc;
    printf("Qual exercicio deseja realizar? [3] ou [4]: ");
    scanf("%d",&exc);

    switch(exc){

    case 3:
    exc3();
    break;

    case 4:
    exc4();
    break;
}
