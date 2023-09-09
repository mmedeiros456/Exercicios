#include <stdio.h>
#include <stdlib.h>

#define valor_extrato 3

// prog p/ mostrar o menu de banco

int main (){
	float dinheiro = 0, mov_dinheiro, verifica;
	float extrato[valor_extrato];
	int i = 0,j = 0;
	char escolha;
	
	puts("\nBem Vindo ao banco XYZ\n");
	puts("by Marcelo");
	puts("Menu de Banco");
	puts("08/09/2023  V 1.2\n\n");
	
	system("pause\n\n");
	
	do{
		system("cls"); 
		
		puts("\nEscolha a opcao desejada no menu");
		puts("(a) - Consultar saldo");
		puts("(b) - Saque");
		puts("(c) - Deposito");
		puts("(t) - Extrato(em teste)");
		puts("(d) - Sair");
		
		scanf(" %c",&escolha);
		
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
				
				if(i >= 3)
					i = 0;
					
				extrato[i] = -1*mov_dinheiro;
				i++;
				dinheiro = dinheiro - mov_dinheiro;
						
				break;
				
			case 'c':
				do{
					puts("\nQual o valor do deposito?");
					fflush(stdin);
					verifica = scanf(" %f",&mov_dinheiro);					
				}while(verifica == 0);
			
				if(i >= 3)
					i = 0;
			 		
				extrato[i] = mov_dinheiro;
				i++;
				dinheiro = dinheiro + mov_dinheiro;
								
				break;
				
			case 't':
				printf("O extrato da suas %.0d ultimas movimentacoes sao :\n",valor_extrato);
				
				for (j = 0; j < 3; j++)
					printf("%.2f\n",extrato[j]);
					
				system("pause");
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
