#include <stdio.h>
#include <conio.h>

void main (){
	float num1, num2;
	float media;

	printf("informe primeira nota: ");
	scanf("%f", &num1);
	printf("informe segunda nota: ");
	scanf("%f", &num2);
	media = ((num1 + num2) / 2);
	if (media >= 7 ){
	printf("Aprovado. Nota = %f" , media );
	}
	else {
	printf("Reprovado. Nota = %f" , media);
	}
	

	
	
}
