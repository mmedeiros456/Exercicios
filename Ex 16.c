#include <stdio.h>
#include <math.h>

// prog p/ mostrar o menu de banco

int main (){
	float dinheiro = 0, mov_dinheiro, verifica;
	char escolha;
	
	puts("\nBem Vindo ao banco XYZ\n");
	puts("by Marcelo");
	puts("Menu de Banco");
	puts("08/09/2023  V 1.1\n\n");
	system("pause\n\n");
	
	do{
		system("cls"); 
		puts("\nEscolha a opcao desejada no menu");
		puts("(a) - Consultar saldo");
		puts("(b) - Saque");
		puts("(c) - Deposito");
		puts("(d) - Sair");
		escolha = getche();
		
		switch(escolha){
			case 'a':
				printf("\nR$%.2f\n\n\n",dinheiro);
				system("pause");
				break;
				
			case 'b':
				do{
					puts("\nQual o valor do saque?");
					fflush(stdin);
					verifica = scanf(" %f",&mov_dinheiro); // var verifica p/ identificar que foi digitado numeros
				}while(verifica == 0);
				
				dinheiro = dinheiro - mov_dinheiro;
				break;
				
			case 'c':
				do{
					puts("\nQual o valor do deposito?");
					fflush(stdin);
					scanf(" %f",&mov_dinheiro);
				}while(verifica == 0);
				
				dinheiro = dinheiro + mov_dinheiro;
				break;
		}
	}while(escolha != 'd');	
	
	system("cls"); 
	puts("Banco XYZ o amigo do idoso.");
	puts("Volte Sempre...");
	puts("Ou nao.\n\n");
	system ("pause");
	
	return 0;
}
