#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main()
{
	int numero_aliatorio[100], vetor_recebe[100] , i, j;
	srand(time(NULL));
	
	puts("inicio");
	
	for (i = 0; i < 100 ; i++)
	{
		numero_aliatorio[i] = rand()%16;
		printf("O Vetor %d tem valor %d\n", i, numero_aliatorio[i]);
			
		if(numero_aliatorio[i] == 0)
			break;	
	}
	
	puts("----------------");
	
	for (j = 99, i = 0; j > 0 ; j--, i++)
	{
		vetor_recebe[j] = numero_aliatorio[i];
		printf("O Vetor %d tem valor %d\n", j, vetor_recebe[j]);
		
		if(numero_aliatorio[i] == 0)
			break;
	}
	return 0;
}*/

#define N 100

int main ()
{
	int vetor[N], i, sorteio, dimensao, temp;
	
	srand(time(NULL));
	
	for (i = 0; i < N; i++)
		{
			sorteio = rand()%16;
			//printf("\nRandom : %d\n",sorteio);
			
			if(sorteio == 0)
				break;
				
			else
			{
				vetor[i] = sorteio;
				printf(" %d ",vetor[i]);
			}
		}
		
	dimensao = i;
	printf("\nDimensao do novo vetor: %d", dimensao);
	
	for(i = 0; i < dimensao / 2 ; i++)
		{
			temp = vetor[i];
			vetor[i] = vetor [ dimensao-1-i];
			vetor[dimensao -1 -i] = temp;
		}
	
	printf("\nInversao do vetor... ");
	
	for(i = 0 ; i < dimensao ; i++)
		printf("%d ", vetor[i]);
		
	return 0;
}
