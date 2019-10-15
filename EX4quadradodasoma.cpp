/*Funcao: Soma três valores e mostra o quadrado da soma deles
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "");
	int a = 0, b = 0, c = 0, square = 0;
	
	printf("informe o primeiro numero (a): ");
	scanf("%i", &a);
	
		printf("informe o segundo numero (b): ");
	scanf("%i", &b);
	
		printf("informe o terceiro numero (c): ");
	scanf("%i", &c);
	
	square = a+b+c;
	square = square*square;
	
	printf("O quadrado da soma dos numeros é: %i\n\n\n", square);
	system("pause");
}
