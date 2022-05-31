/* Construa um programa em C que leia a matricula, a nota da V1 e a nota da V2 de um
aluno. Imprimir: a matricula, nota da V1, nota da V2, média aritmética e uma das
mensagens: APROVADO ou O ALUNO DEVERÁ FAZER A VS ou REPROVADO (a
média é 6.0 para aprovação, considerando que para fazer a VS a média entre a V1 e a V2
deve ser maior ou igual a 4,0).  */

#include <stdio.h>
main()
{
	int		mat;	
	float 	v1, v2, media;
	printf("\nMatrícula: ");
	scanf("%d",&mat);
	printf("\nNota V1: ");
	scanf("%f",&v1);
	printf("\nNota V2: ");
	scanf("%f",&v2);
	printf("\nO aluno %d, obteve as notas %.2f e %.2f.\nMédia final: %.2f.",mat,v1,v2,media=(v1+v2)/2);
	if (media>=6)
		printf("\nAPROVADO.\n\n");
	else if (media>=4 && media<6)
		printf("\nO ALUNO DEVERÁ FAZER A VS.\n\n");
	else
		printf("\nREPROVADO.\n\n");
}

