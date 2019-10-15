/*Funcao: Maior que 100 soma 150
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n = 0.0;
	
	printf("Informe um número: ");
	scanf("%f", &n1);
	
	if (n>100){
		n = n +150;
		printf("O numero mais 150 é: %.2f\n\n\n", n);
	}
	else{
		printf("Seu numero está o mesmo");
	}
	system("pause");
}
