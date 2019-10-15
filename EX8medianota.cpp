/*Funcao: calcula a média de 4 notas
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocate(LC_ALL, "");
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, m =0;
	
	printf("Informe a nota 1: ");
	scanf("%i", &n1);
	
		printf("Informe a nota 2: ");
	scanf("%i", &n2);
	
		printf("Informe a nota 3: ");
	scanf("%i", &n3);
	
		printf("Informe a nota 4: ");
	scanf("%i", &n4);
	
	m = (n1+n2+n3+n4)/4;
	
	printf("A média é: %i\n\n\n", m);
	system("pause");
}
