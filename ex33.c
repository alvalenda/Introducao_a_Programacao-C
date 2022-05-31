/*Um plano de saúde, após as negociações com o governo enviou a tabela abaixo. Faça um
 programa que entre com o número do CPF e a idade de uma pessoa e imprimir o CPF e o
 valor que ela deverá pagar.
	- até 10 anos 				- R$ 30,00
	- maior que 10 até 29 anos 	- R$ 60,00
	- maior que 29 até 45 anos 	- R$ 120,00
	- maior que 45 até 59 anos 	- R$ 150,00
	- maior que 59 até 65 anos	- R$ 250,00
	- maior que 65 anos 		- R$ 400,00 */
#include <stdio.h>
main()
{
	int idade, cpf;
	printf("\nCPF:");
	scanf("%d",&cpf);
	printf("\nIdade:");
	scanf("%d",&idade);
	if (idade<=10)
		printf("\nO CPF %d tem %d anos e deverá pagar R$30,00.\n\n",cpf,idade);	
	else	if(idade>10&&idade<=29)
		printf("\nO CPF %d tem %d anos e deverá pagar R$60,00.\n\n",cpf,idade);
	else 	if(idade>29&&idade<=45)
		printf("\nO CPF %d tem %d anos e deverá pagar R$120,00.\n\n",cpf,idade);
	else	if(idade>45&&idade<=59)
		printf("\nO CPF %d tem %d anos e deverá pagar R$150,00.\n\n",cpf,idade);
	else	if(idade>59&&idade<=65)
		printf("\nO CPF %d tem %d anos e deverá pagar R$250,00.\n\n",cpf,idade);
	else
		printf("\nO CPF %d tem %d anos e deverá pagar R$400,00.\n\n",cpf,idade);
}
