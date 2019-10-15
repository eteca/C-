/*Funcao: DEscobrir a área de um triangulo
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "");
	float b =0.0 , h = 0.0 , area = 0.0;
	
	printf("Informe a base do triângulo: ");
	scanf("%f", &b);
	
	printf("informe a altura do triângulo: ");
	scanf("%f", &h);
	
	area = b*h/2;
	
	printf("A área do triângulo é: %.2f\n\n\n", area);
	system("pause");
}
