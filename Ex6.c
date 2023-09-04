#include <stdio.h>
#include <stdlib.h>

// prog p/ achar horas,min e segs com entrada em segundos

int main(){
	int seg, min, rmin, hora, rhora;
	puts("Digite o Valor em Segundos");
	scanf(" %d",&seg);
	hora = seg/3600;
	rhora = seg%3600;
	printf("hora: %d\n",hora);
	min = rhora/60;
	rmin = rhora%60;
	printf("min: %d\n",min);
	printf("seg: %d",rmin);
	printf("\n%dh%dmin%ds\n",hora,min,rmin);
	system("pause");
	return 0;
}
