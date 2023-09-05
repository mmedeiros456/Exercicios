#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>  pesquisa na internet para nova biblioteca de verificação

//prog p/ fazer determinada operacao aparir de 2 numeros
//falta achar um modo de verif se o num1 e num2 são numeros

int main()
{
	float num1, num2;
	char escolha;
	puts("Escolha a opcao aritmetica desejada a ser executada\n");
	puts("1\tMedia Aritmetica");
	puts("2\tDiferenca do maior pelo menor");
	puts("3\tproduto entre dois numeros");
	puts("4\tDivisao do primeiro numero pelo segundo\n");
	fflush(stdin);
	escolha = getche();
	puts("\n\nDigite os dois numeros para a operacao");
	fflush(stdin);
	scanf(" %f %f",&num1,&num2);
	switch(escolha)
		{
		case '1':
			printf("\nO resultado da media e: %.2f",(num1+num2)/2);
			break;
		case '2':
			if(num1>num2)
				printf("\nO resultado da diferenca do maior pelo menor e: %.2f",num1-num2);
			else	
				printf("\nO resultado da diferenca do maior pelo menor e: %.2f",num2-num1);
			break;
		case '3':
			printf("\nO resultado do produto e: %.2f",num1*num2);
			break;
		case '4':
			printf("\nO resultado da divisao e: %.2f",num1/num2);
			break;
		default:
			printf("\nDigite uma opcao valida\n");
		}
	system("pause");	
	return 0;
}
