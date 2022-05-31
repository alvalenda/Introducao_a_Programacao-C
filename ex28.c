//Escreva um programa em C que leia dois números inteiros e imprima o maior número lido (suponha números diferentes).
#include <stdio.h>

main()
{
	int a,b;
	printf("\nInteiro 1: ");
	scanf("%d",&a);
	printf("\nInteiro 2: ");
	scanf("%d",&b);
	if (a>=b)
		printf("\nO maior número é %d\n\n.",a);
	else 
		printf("\nO maior número é %d\n\n.",b);
}

