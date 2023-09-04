#include <stdio.h>
#include <stdlib.h>

// prog p/ verif peso ideal com base na altura e genero

void main(){
	char gen;
	float alt;
	puts("Digite seu genero: (F ou M)");
	gen = getche();
	puts("\nDigite sua altura em metros");
	fflush(stdin);
	scanf(" %f",&alt);
	gen = tolower(gen);
	if(gen == 'f')
		{
		float m = (62.1*alt)-44.7;
		printf("\nSeu peso ideal e %.1f\n\n",m);
		}
	else
		{
		float h = (72.2*alt)-58;
		printf("\nSeu peso ideal e %.1f\n\n",h);
		}
	system("pause");
		
}
