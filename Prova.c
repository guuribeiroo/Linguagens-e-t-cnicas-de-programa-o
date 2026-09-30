#include <stdio.h>

int verifica(int n);
    int verifica(int n){
        if ((n % 2) != 0)
        if ((n % 5) == 0)
            return 1;
        else 
        return 0;
}


int main()
{
   int n1,n2,n3,n4;
	printf("Insira os numeros a serem analisados: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if (verifica(n1)) printf("%d\n",n1);
    if (verifica(n2)) printf("%d\n",n2);
    if (verifica(n3)) printf("%d\n",n3);
    if (verifica(n4)) printf("%d\n",n4);



{
  /* int n1,n2,n3,n4;
	printf("Insira os numeros a serem analisados: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if (verifica(n1)) printf("%d\n",n1);
    if (verifica(n2)) printf("%d\n",n2);
    if (verifica(n3)) printf("%d\n",n3);
    if (verifica(n4)) printf("%d\n",n4);

*/

	
return 0;
}
