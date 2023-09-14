#include <stdio.h>
#include <stdlib.h>

#define N 5

//Prog p/ soma de 2 matrizes

void main()
{
	int mat_1[N][N] = {{1,2},
			   {2,1}};
	int mat_2[N][N] = {{3,4},
			   {5,6}};
	int mat_r[N][N];
	int i, j;
	
	puts("Matriz 1 :");
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%d\t",mat_1[i][j]);
		puts("");	
	}
	
	puts("\nMatriz 2 :");
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
			printf("%d\t",mat_2[i][j]);
		puts("");	
	}
	
	puts("\nMatriz Resultado:");
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			mat_r[i][j] = mat_1[i][j] + mat_2[i][j];
			printf("%d\t",mat_r[i][j]);
		}
	puts("");
	}	
}
