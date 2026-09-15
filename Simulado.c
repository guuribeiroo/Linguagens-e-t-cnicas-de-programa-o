#include <stdio.h>
#include <stdlib.h>

float calc_vpa(float valor_patrimonial, float quantidade_de_acoes){
    return (valor_patrimonial / quantidade_de_acoes);
}
float calc_pvp(float preco_acoes, float vpa){
    return (preco_acoes/vpa);
}
   
int main(){
  float valor_patrimonial,preco_acoes,quantidade_de_acoes,pvp,vpa;
  printf("Insira o valor partimonial: ");
  scanf("%f",&valor_patrimonial);
  printf("Insira a quantidade de ações disponiveis: ");
  scanf("%f",&quantidade_de_acoes);
  printf("Insira o preço atual da ação: ");
  scanf("%f",&preco_acoes);
  printf("=======Classificação do P/VP=======\n");

vpa = calc_vpa(valor_patrimonial, quantidade_de_acoes);
pvp = calc_pvp(preco_acoes, vpa);

  if(pvp < 0){
    printf("Péssima");
  }
  else if(pvp >= 0 && pvp < 0.8){
    printf("Ótima");
  }
  else if(pvp >= 0.8 && pvp <= 1.2){
    printf("Indiferente");
  }
  else if(pvp > 1.2 && pvp <= 2.0){
    printf("Boa");
  }
  else if(pvp > 2.0){
    printf("Ruim");
  }

  printf("\nVPA - %.2f\nPVP -%.2f",vpa,pvp);
  return 0;

}

 /*{ int a,b,c,d,aux1,aux2,aux3,aux4;
  printf("Insira o valor de A B C D: ");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  aux1 = a;
  aux2 = b;
  aux3 = c;
  aux4 = d;
  a = c;
  b = aux1;
  c = d;
  d = aux2;

  printf("%d %d %d %d",a,b,c,d);
return 0;
}
*/

  

  return 0;
}
