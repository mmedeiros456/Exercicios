#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 10

// prog p/ criar vetor X com valores num aliatorio e os ordenar no vetor

void main ()
{
	float vetor[n], aux;
	int i, j, k;
	
	srand(time(NULL));
	
	for( i= 0 ; i < n ; i++)
	{
		vetor[i] = rand()%10;
		printf("Vetor %d com valor %.1f\n",i ,vetor[i]);
	}
	
	for(j = 0; j < n ; j++)
	{
		aux = vetor[j];
		
		for (k = j; k < n; k++)
		{
			if(vetor[j] < vetor[k])
			{		
				aux = vetor[j];
				vetor[j] = vetor [k];
				vetor [k] = aux;
			}
		}
	printf("\nVetor %d com valor %.1f",j ,vetor[j]);		
	}
		
}
