#include <stdio.h>
#include <conio.h>

void main (){
	float num1, num2, num3;
	float conta;

	printf("informe primeiro numero: ");
	scanf("%f", &num1);
	printf("informe segundo numero: ");
	scanf("%f", &num2);
	printf("informe terceiro numero: ");
	scanf("%f", &num3);
	conta = ((num2 - num1) / num3);
	printf("o numero1 - numero2 / numero3 = : %f", conta);

	
	
}
