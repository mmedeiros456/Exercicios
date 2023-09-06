#include <stdio.h>
#include <math.h>
#define tam 10

// programa para retornar um valor rms do vetor

int main (){
	
	float vet[tam], soma, rms;
	int i;
	
	printf ("Insira %d valores para o vetor\n",tam);
	
	for(i = 0; i < tam; i++){
		fflush(stdin);
		scanf(" %f",&vet[i]);
	}
	
	for(i = 0; i < tam; i++){
		soma = soma + ( vet[i] * vet[i]);
		printf("\nVetor [%d] com valor de %.2f somatoria de %.2f\n",i ,vet[i], soma);	
	}
	
	rms = sqrt(soma/tam);
	printf("\nO valor RMS(vet) = %f\n",rms);	
	
	return 0;
}
