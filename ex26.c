//Faça um programa em C que entre com um número e informe se ele é positivo, negativo ou nulo.

#include <stdio.h>

main()
{
	float x;
	printf("\nReal: ");
	scanf("%f",&x);
	if (x>0)
		printf("\nPositivo.\n\n");
	else if (x<0)		
		printf("\nNegativo.\n\n");
	else	
		printf("\nNulo.\n\n");
}

