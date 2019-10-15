/*Funcao: Descobir a area de um circulo
AUtor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "");
	float r = 0.0, area = 0.0;
	const double p = 3.14;
	
	printf("Informe o raio do círculo: ");
	scanf("%f", &r);
	
	area = r*r*p;
	
	printf("Área = %.2f\n\n\n",area);
	system("pause");
}
