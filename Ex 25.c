#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 9
#define M 12
#define QTD_VALOR_RAND 8

//Prog p/ criar valores aliatorios para 2 vetores e testar se vetor A esta contido no vetor B.
//V1.0 ... precisa aplicar funcoes auxiliares para tornar o prog mais legivel.
//OBS: fazer com matrizes bidimensionais (posteriormente tridimensionais) e com uso de funcoes auxiliares.


int main()
{
	int vetor1[N];
	int vetor2[M];
	int i, j, cont = 0;	
	
	srand(time(NULL));
	
	for (i=0; i<N; i++)
		vetor1[i] = rand()%QTD_VALOR_RAND;
	
	for(i=0; i<M; i++)
		vetor2[i] = rand()%QTD_VALOR_RAND;
		
	//imprimir vetores	
	for(i = 0 ; i < N; i++)
		printf("%d ", vetor1[i]);	
	
	printf("\n------------\n");
	for(i = 0 ; i < M ; i++)
		printf("%d ", vetor2[i]);
		
	//teste de verificacao se A esta contido em B	
	for(i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			if(vetor1[i] == vetor2[j])
			{
				cont ++;
				break;
			}
		}
		if(cont == N)
		{
			printf("\n\nA esta contido em B");
			return 0;
		}
	}
	printf("\n\nA nao esta contido em B");
	return 0;
}

