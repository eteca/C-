/*Funcao: calcula o aumento de um sal�rio
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float s = 0.0, au = 0.0, a = 0.0;
	
	printf("informe o seu sal�rio atual: ");
	scanf("%f", &s);
	
	printf("Informe o valor do aumento: ");
	scanf("%f", &au);
	
	a = au/100*s+s;
	
	printf("O novo sal�rio �: %.2f\n\n\n", a);
	system("pause");
}
