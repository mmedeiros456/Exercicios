#include <stdio.h>
#include <stdlib.h>

//prog p/ media de idade um grupo de pessoas, -1 da quit no prog 

int main()
{
	int cont = 0, idade;
	float media = 0;
	
		while(idade != -1)
			{
			puts("Coloque a idade da pessoa");
			puts("Digite -1 para finalizar");
			scanf(" %d",&idade);
			if (idade<=-2 || idade == 0 || idade>= 90)
				puts("\nprovavelmente foi inserido uma idade errada");
			else if(idade != -1)
				{
				media = media + idade;
				cont++; 
				}
			}	
			
	puts("\nTerminou o cadastro das pessoas\n");
	
	media = media / cont;
	printf("Totalizando uma media de %.1f\n",media);
	
	system("pause");
	
	return 0;
}
