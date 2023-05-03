#include <stdio.h>
#include <conio.h>

void main (){
	int anoa;
	int anon;
	int idade;

	printf("informe seu ano de nascimento: ");
	scanf("%d", &anon);
	printf("informe o ano atual: ");
	scanf("%d", &anoa);
	idade = anoa - anon;
	printf("Idade Atual: %d ", idade);

	
	
}
