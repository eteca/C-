/*Funcao: Descobrir a �rea de um ret�ngulo
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int h = 0, b = 0 , area = 0 ;
	
	printf("Informe a base do ret�ngulo: ");
	scanf("%i", &b);
	
	printf("informe a altura do ret�ngulo: ");
	scanf("%i", &h);
	
	area = h*b;
	
	printf("�rea = %i\n\n\n", area);
	system("pause");
}
