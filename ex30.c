// Escreva um programa em C que leia dois números inteiros e imprima o menor número lido (suponha números diferentes).

#include <stdio.h>

main()
{
	int a,b;
	printf("\nInteiro 1: ");
	scanf("%d",&a);
	printf("\nInteiro 2: ");
	scanf("%d",&b);
	if (a>=b)
		printf("\nO menor número é %d\n\n.",b);
	else
		printf("\nO menor número é %d\n\n.",a);
	
}


