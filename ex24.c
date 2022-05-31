// Escreva um programa em C que entre com um número e imprima a raiz quadrada do número caso ele seja positivo e o quadrado do número caso ele seja negativo.

#include <stdio.h>
#include <math.h>

main ()
{
	float x;
	printf("\nReal: ");
	scanf("%f",&x);
	if (x>0)
		printf("\nRaiz quadrada de %.2f: %.2f.\n\n",x,sqrt(x));
	else if (x<0)
		printf("\nQuadrado de %.2f: %.2f.\n\n",x,pow(x,2));
	else
		printf("\n%.2f não é um valor válido.\n\n",x);
}
