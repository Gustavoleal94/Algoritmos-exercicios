#include <stdio.h>
#include <conio.h>

void main (){
	float num1, num2, num3;
	float media;

	printf("informe primeira nota: ");
	scanf("%f", &num1);
	printf("informe segunda nota: ");
	scanf("%f", &num2);
	printf("informe terceira nota: ");
	scanf("%f", &num3);
	media = ((num1 + num2 + num3) / 3);
	printf("media das notas = : %f", media);

	
	
}
