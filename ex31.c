//Escreva um programa em C que leia três números inteiros e imprima o valor do menor número lido (suponha números diferentes).

#include <stdio.h>
main()
{
	int a,b,c;
	printf("\nInteiro 1: ");
	scanf("%d",&a);
	printf("\nInteiro 2: ");
	scanf("%d",&b);
	printf("\nInteiro 3: ");
	scanf("%d",&c);
	if (a<=b&&a<=c)
		printf("\nO menor número é: %d.\n\n",a);
	else if (b<=a&&b<=c)
		printf("\nO menor número é: %d.\n\n",b);
	else
		printf("\nO menor número é: %d.\n\n",c);
}

