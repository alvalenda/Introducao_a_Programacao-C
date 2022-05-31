/* Faça um programa em C para entrar com o salário de uma pessoa e imprimir o
desconto do INSS segundo a tabela abaixo:
- menor ou igual a R$ 900,00 - isento
- maior que R$ 900,00 e menor ou igual a R$ 1200,00 - 10%
- maior que R$ 1200,00 e menor ou igual a R$2000,00 - 15%
- maior que R$ 2000,00 – 27,5%
*/

#include <stdio.h>
main()
{
	float s;
	printf("\nSalário: ");
	scanf("%f",&s);
	
	if (s<=900)
		printf("\nIsento de desconto.Receberá R$%.2f.\n\n",s);
	else if (s>900&&s<=1200)		
		printf("\nDesconto de 10 porcento.\tReceberá R$%.2f.\n\n",0.9*s);

	else if (s<=2000)
		printf("\nDesconto de 15 porcento.\tReceberá R$%.2f.\n\n",0.85*s);

	else
		printf("\nDesconto de 27.5 porcento.\tReceberá R$%.2f.\n\n",0.725*s);
}
