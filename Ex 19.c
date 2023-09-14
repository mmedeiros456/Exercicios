#include <stdio.h>

#define N 3

void main()
{
	int mat[N][N] = {{1,2,3},
					 {4,5,6},
					 {7,8,9}};
	int mat_t[N][N];
	int i, j;
	
	
	//print matriz
	printf("Matriz Original: \n");
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
			printf("%d ",mat[i][j]);
			
	printf("\n");
	}
	//print matriz	
		
	
	
	//transposição da matriz	
	for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
				mat_t[i][j] = mat[j][i];
		}
	//transposição da matriz
	
	
		
	printf("Matriz Trasposta: \n");
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
			printf("%d ",mat_t[i][j]);
			
	printf("\n");
	}
}
