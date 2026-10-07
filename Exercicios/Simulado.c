#include <stdio.h>
#include <stdlib.h>

int main(){

    float v_patri,q_acoes,preco_acao,pvp,vpa;

    printf("Insira o valor patrimonial da empresa: ");
    scanf("%f",&v_patri);
    printf("Insira a quantidade de ações: ");
    scanf("%f",&q_acoes);
    printf("Insira o preço da ação: ");
    scanf("%f",&preco_acao);

    vpa = v_patri / q_acoes;
    pvp = preco_acao / vpa;

    printf("===================Situação: ");

    if(pvp < 0){
        printf ("Péssima!");
    }else if(pvp >= 0 && pvp < 0.8){
        printf ("Ótima!");
    }else if(pvp > 0.8 && pvp < 1.2){
        printf ("Indiferente!");
    }else if(pvp > 1.2 && pvp <= 2.0){
        printf ("Boa!");
    }else printf ("Ruim!");
    printf("==================\nVPA = %f\nPVP = %f\n===============================================================",vpa,pvp);
}
}

 /*{ int a,b,c,d,aux1,aux2;
  printf("Insira o valor de A B C D: ");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  aux1 = a;
  aux2 = b;
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
