// Escreva um programa em C para entrar com três números inteiros e imprimi-los em ordem crescente (suponha números diferentes).

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
	if (a<=b&&b<=c)
		printf("\nOrdem crescente: %d, %d e %d.\n\n",a,b,c);
	else if (a<=c&&c<=b)
		printf("\nOrdem crescente: %d, %d e %d.\n\n",a,c,b);
	else if (b<=a&&a<=c)
		printf("\nOrdem crescente: %d, %d e %d.\n\n",b,a,c);
	else if (b<=c&&c<=a)
		printf("\nOrdem crescente: %d, %d e %d.\n\n",b,c,a);
	else if (c<=a&&a<=b)
		printf("\nOrdem crescente: %d, %d e %d.\n\n",c,a,b);
	else
		printf("\nOrdem crescente: %d, %d e %d.\n\n",c,b,a);
}
