#include <stdio.h>
#include <stdlib.h>

//prog p/ calculo do fatorial

void main ()
{
	float num1, cont, fatorial = 1;
	
	puts("Digite o numero a fatorar");
	scanf(" %f",&num1);
	
	if (num1 > 1 )
	{
	for(cont = 1; cont <= num1; cont++)
		{
		fatorial = fatorial * cont;	
	//	printf("\n%.1f",fatorial);
		}			
	}
	printf("\n%0.1f! = %0.1f\n",num1,fatorial);
	system("pause");	
}
