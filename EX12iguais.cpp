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
	
	printf("Informe o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%f", &n2);
	
	if(n1 == n2){
		printf("Eles s�o iguais\n\n\n");
	}
	else{
		printf("Eles n�o s�o iguais\n\n\n");
	}
	system("pause");
}
