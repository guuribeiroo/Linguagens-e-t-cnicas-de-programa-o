#include <stdio.h>
#include <stdlib.h>
int main()
/* LISTA 2 */
{


//1)//


    int anoatual, idade, anonascimento;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    printf("Digite o ano atual: \n");
    scanf("%d", &anoatual);

    anonascimento = anoatual - idade;

    printf("\nO seu ano de nascimento é: %d", anonascimento);

//2)//
    float kmh, ms;
    printf("Digite a velocidade em KM/H: \n");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("A velocidade %f em M/S equivale a: %f",kmh,ms);


//3)//
    float real, dolar,operador;
    printf("Digite o valor em reais: ");
    scanf("%f",&real);
    printf("Digite a cotação do dolar atual com um ponto para dividir as casas: ");
    scanf("%f",&dolar);

    operador = real / dolar;

    printf("O valor em dolares é = %f",operador );

//4)//   
    float c,f;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f",&c);
    f = c*(9.0/5.0) + 32;
    printf("A temperatura de %f convertida para Fahrenheit é = %f",c,f);

//5)//   
    float grau,radi,p;
    p = 3.141592;                                                                                                                //definição do valor de pi sem variação 
    printf("Digite o angulo em graus: \n");
    scanf("%f",&grau);

    radi = (grau * p)/180;

    printf("O angulo em radianos vale: %f \n",radi);


//6)// 
    int inteiro,antecessor, sucessor;
    printf("Digite um número inteiro: \n");
    scanf("%d",&inteiro);

    antecessor = inteiro - 1;
    sucessor = inteiro + 1;

    printf("O Antecessor de %d é = %d\n",inteiro,antecessor);
    printf("O sucessor de %d é = %d",inteiro,sucessor);

//7)//
    float total,primeiro,segundo,terceiro;
    total = 780.000;
        primeiro = total * 46 / 100;
        segundo = total * 32 / 100;
        terceiro = total - primeiro - segundo;

        
        printf("O primeiro receberá: $%.3f\n o segundo: $%.3f\n e o terceiro: $%.3f", primeiro,segundo,terceiro);                  //.3%f para demonstrar 3 casas pós a virgula

//8)//

    int segundo,minuto,hora;
    printf("Digite a duração em segundos do evento: \n");
    scanf("%d",&segundo);                               
    hora = segundo / 3600;
    segundo = segundo % 3600;               
    
    minuto = segundo / 60;
    segundo = segundo % 60;

    printf("O tempo de duração foi %d:%d:%d", hora,minuto,segundo);


//9)//

    float tempo, velomedia, distancia,litros;
    printf("Digite o tempo em que você gastou na viagem em horas: \n");
    scanf("%f",&tempo);
    printf("Digite a velocidade média que você percorreu a viagem em KM/H: \n");
    scanf("%f",&velomedia);

    distancia = velomedia * tempo;
    

    litros = distancia / 12;
    printf("Foram gastos para percorrer %.3fKm %.3fL de gasolina",distancia,litros);


//10)//

    int a,b,c, maiorAB, maior;
    printf("Digite um número: \n");
    scanf("%d",&a);
    printf("Digite um número: \n");
    scanf("%d",&b);
    printf("Digite um número: \n");
    scanf("%d",&c);

    maiorAB = (a + b + abs(a - b)) /2;
    maior = (maiorAB + c + abs(maiorAB - c))/2;

    printf("%d eh o maior \n",maior);

}
