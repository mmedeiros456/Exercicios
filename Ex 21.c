#include <stdio.h>
#include <stdlib.h>

#define N 3

//prog p/ multiplicação de matrizes

void main()
{
	int mat_1[N][N] = {{1,2,3},
			   {3,4,5},
			   {6,7,8}};
					   
	int mat_2[N][N] = {{1,2,3},
			   {3,4,5},
			   {6,7,8}};
					   
	int mat_r[N][N];
	int i, j, k, res_aux;
	
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			res_aux = 0;
			
			for(k=0; k<N; k++)
			{
				res_aux = res_aux + (mat_1[i][k] * mat_2[k][j]);
				
			}
		mat_r[i][j] = res_aux;
		}
	}
	
	puts("\nMatriz Resultado:");
	for(i=0; i<N; i++)
	{
		for(j=0; j<N; j++)
		{
			printf("%d\t",mat_r[i][j]);
		}
	puts("");
	}					   
}
