#include <stdio.h>
#include <stdlib.h>

#define QTD 3

//prog p/ uma agenda de contatos

typedef struct contatos
{
	char nome[50];
	char endereco[100];
	char fone[20];
	int CEP;
}contatos_t;



int main ()
{
	contatos_t lista_contato[QTD];
	int i, j, k, aux_novo_contato = 0, novo_contato, temp;
	char opcao;

	do{
		system("cls"); 
	
		puts("Bem-Vindo a agenda de contatos");
		puts("Selecione a opcao desejada no menu abaixo");
		puts("1 - Adicionar novo contato");
		puts("2 - Verificar dados de um contato cadastrado");
		puts("3 - imprimir a lista de nomes cadastrados");
		puts("4 - Sair");
		
		fflush(stdin);
		scanf(" %c",&opcao);
		
		switch (opcao)
		{
			case '1':
				puts("\nDigite a quantidade de contatos a cadastrar");
				scanf(" %d",&novo_contato);
				printf("\n\n");
				
				if(aux_novo_contato>=QTD)
				{
					puts("\nLista de contatos cheia\n");
					system("pause");
					break;
				}
				
				for(i=0; i<novo_contato; i++)
				{
					puts("Digite o nome");
					fflush(stdin);
					fgets(lista_contato[aux_novo_contato].nome, sizeof(lista_contato[aux_novo_contato].nome), stdin);
					
					puts("Digite o telefone");
					fflush(stdin);
					fgets(lista_contato[aux_novo_contato].fone, sizeof(lista_contato[aux_novo_contato].fone), stdin);
					
					puts("Digite o endereco");
					fflush(stdin);
					fgets(lista_contato[aux_novo_contato].endereco, sizeof(lista_contato[aux_novo_contato].endereco), stdin);
					
					puts("Digite o CEP");
					fflush(stdin);
					scanf(" %d",&lista_contato[aux_novo_contato].CEP);
					
					printf("\n");
					aux_novo_contato++;
				}
				break;
				
			case '2':
				for(i=0; i<aux_novo_contato; i++)
				{
					printf("Nome: %sTel: %s\nEnd: %sCEP: %d\n\n",
																lista_contato[i].nome,
																lista_contato[i].fone,
																lista_contato[i].endereco,
																lista_contato[i].CEP);
				}
				
				system("pause");
				break;
				
			case '3':
				if (aux_novo_contato == 0) 
				{
    			    printf("A agenda esta vazia.\n\n");
    			    system("pause");
       				break;
    			}

   				printf("Lista de pessoas na agenda:\n");
   				
   				for (int i = 0; i < aux_novo_contato; i++) 
				{
   				     printf("%d. %s\n", i + 1, lista_contato[i].nome);
   				}
   				
   				system("pause");
				break;
				
		}
	}while(opcao != '4');	
	
	puts("Programa encerrado");
	puts("Agenda V1.0");
	puts("By Marcelo");
	
	system("pause");
	
	return 0;
}
