/*Funcao: DEscobre o preço de um terreno retângular
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int b = 0, h = 0, area = 0;
	float m = 0.0, p = 0.0;
	
	printf("Informe a base: ");
	scanf("%i", &b);
	
	printf("Informe a altura: ");
	scanf("%i", &h);
	
	printf("Informe o valor do metro quadrado: ");
	scanf("%f", &m);
	
	area = h*b;
	p = area*m;
	
	printf("O preço do terreno é: %.2f\n\n\n", p);
	system("pause");
}
