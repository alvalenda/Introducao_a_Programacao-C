// Escreva um programa em C que leia um número inteiro e imprima uma das mensagens:maior do que 10; é igual a 10 ou é menor do que 10.

#include <stdio.h>

main()
{
	int x;
	printf("\nInteiro: ");
	scanf("%d",&x);
	if (x>10)
		printf("\nMaior do que 10.\n\n");
	else if (x<10)		
		printf("\nMenor do que 10.\n\n");
	else	
		printf("\nIgual a 10.\n\n");
}

