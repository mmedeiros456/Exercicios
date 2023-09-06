#include <stdio.h>

int main () {
	
	char operador;
	float n1, n2;
	
	do {
		puts("------------------");
		puts("Menu de Opcoes");
		puts("m: media aritmetica");
		puts("-: subtracao do maior pelo menor");
		puts("*: produto entre dois numeros");
		puts("/: divisao do primeiro pelo segundo");
		puts("------------------");
	
		puts("Digite as opcao desejada");
		fflush(stdin);
		scanf(" %c",&operador);
	
		if (operador != 'm' && operador != '-' && operador != '*' && operador != '/' ){
			puts("\nDigite uma opcao valida");
			system("pause");
			system("cls"); 
			}
		else
			break;  // break para parar o loop infinito do while(1)
						
	} while (1);
	
	puts("Digite os dois numeros");
	scanf(" %f %f",&n1 ,&n2);
	
	switch(operador){
		case 'm':
			printf("\nO resultado da media e: %.2f",(n1+n2)/2);
			break;
			
		case '-':
			if(n1>n2)
				printf("\nO resultado da diferenca do maior pelo menor e: %.2f",n1-n2);
			else	
				printf("\nO resultado da diferenca do maior pelo menor e: %.2f",n2-n1);
			break;
			
		case '*':
			printf("\nO resultado do produto e: %.2f",n1*n2);
			break;
			
		case '/':
			printf("\nO resultado da divisao e: %.2f",n1/n2);
			break;
		}
	
	return 0;
}
