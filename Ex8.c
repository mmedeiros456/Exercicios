#include <stdio.h>
#include <stdlib.h>

// prog para verificação de quadrante das coordenadas.

int main(){
	float x, y;
	puts("Digite as coordenadas X(horizontal) e Y(vertical)");
	scanf(" %f %f",&x,&y);
	printf("\n");
	if ( x == 0 && y == 0)
		puts("Ponto de Origem");
	else if (( x >= 1 || x <= -1) && y == 0)
		puts("Ponto no eixo X");
	else if ( x == 0 && ( y >= 1 || y <= -1))
		puts("Ponto no eixo Y");
	else if ( x >= 1 && y >= 1)
		puts("Coordenadas no quadrante I ");
	else if ( x <= -1 && y >= 1)
		puts("Coordenadas no quadrante II ");
	else if ( x <= -1 && y <= -1)
		puts("Coordenadas no quadrante III ");
	else if ( x >= 1 && y <= -1)
		puts("Coordenadas no quadrante IV ");
	else 
		puts("coloque um valor numerico para as coordenadas");
	system("pause");
	return 0;
}
