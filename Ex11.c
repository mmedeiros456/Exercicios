#include <stdio.h>
#include <stdlib.h>

// prog p/ entrar 3 alunos e suas notas e os colocar em modo decrescente

int main()
{
	char nome1[30], nome2[30], nome3[30];
	float nota1, nota2, nota3;
	
	puts("Digite o nome do primeiro aluno e sua nota");
	gets(nome1);
	scanf(" %f",&nota1);
	fflush(stdin);
	
	puts("Digite o nome do segundo aluno e sua nota");
	gets(nome2);
	scanf(" %f",&nota2);	
	fflush(stdin);
	
	puts("Digite o nome do terceiro aluno e sua nota");
	gets(nome3);
	scanf(" %f",&nota3);
	
	if (nota1>nota2 && nota2>nota3 && nota1>nota3)			
		printf("\n%s \t%.1f \n%s \t%.1f \n%s \t%.1f",nome1,nota1,nome2,nota2,nome3,nota3);
	
	else if (nota1>nota3 && nota3>nota2 && nota1>nota2)
		printf("\n%s \t%.1f \n%s \t%.1f \n%s \t%.1f",nome1,nota1,nome3,nota3,nome2,nota2);
	
	else if (nota2>nota1 && nota1>nota3 && nota2>nota3)
		printf("\n%s \t%.1f \n%s \t%.1f \n%s \t%.1f",nome2,nota2,nome1,nota1,nome3,nota3);
	
	else if (nota2>nota3 && nota3>nota1 && nota2>nota1)
		printf("\n%s \t%.1f \n%s \t%.1f \n%s \t%.1f",nome2,nota2,nome3,nota3,nome1,nota1);
	
	else if (nota3>nota1 && nota1>nota2 && nota3>nota2)
		printf("\n%s \t%.1f \n%s \t%.1f \n%s \t%.1f",nome3,nota3,nome1,nota1,nome2,nota2);

	else if (nota3>nota2 && nota2>nota1 && nota3>nota1)
		printf("\n%s \t%.1f \n%s \t%.1f \n%s \t%.1f",nome3,nota3,nome2,nota2,nome1,nota1);	
	return 0;
}
