//Fazer um programa em C que recebe um símbolo de operação do usuário (+, -, * ou /) e dois números reais. O programa deve retornar o resultado da operação recebida sobre
//estes dois números.

#include <stdio.h>
main()
{
	float a,b;
	char o;
	printf("\nEntre um Real: ");
	scanf("%f",&a);
	printf("\nEntre com outro Real: ");
	scanf("%f",&b);
	printf("\nEntre com a operação que deverá ser feita ( +, -, * ou / ).\n");
	fgetc(stdin);
	scanf("%c",&o);
		if (o=='+')
			printf("\n%.2f + %.2f = %.2f\n\n",a,b,a+b);
		else if (o=='-')
			printf("\n%.2f - %.2f = %.2f\n\n",a,b,a-b);
		else if (o=='*')
			printf("\n%.2f * %.2f = %.2f\n\n",a,b,a*b);
		else if (o=='/')
			printf("\n%.2f / %.2f = %.2f\n\n",a,b,a/b);
		else
			printf("\nCaractere inválido!!! Entre com  + , - , * ou / .\n\n");
}
	
