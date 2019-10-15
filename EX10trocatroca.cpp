/*Funcao: troca o valor de duas variáveis
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n1 = 0.0, n2 = 0.0, a = 0.0;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	
		printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	
	a = n1;
	n1 = n2;
	n2 = a;
	
	printf("O valor do primeiro é: %.2f. O valor do segundo é: %.2f\n\n\n", n1, n2);
	system("pause");
}
