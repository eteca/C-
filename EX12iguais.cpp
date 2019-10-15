/*Funcao: Mostra os iguais
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n1 = 0.0, n2 = 0.0;
	
	printf("Informe o primeiro número: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo número: ");
	scanf("%f", &n2);
	
	if(n1 == n2){
		printf("Eles são iguais\n\n\n");
	}
	else{
		printf("Eles não são iguais\n\n\n");
	}
	system("pause");
}
