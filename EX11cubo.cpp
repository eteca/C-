/*Funcao: maior que 5, menor que 20, exibe o cubo
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n = 0.0;
	
	printf("Informe um n�mero: ");
	scanf("%f", &n);
	
	if(n<20&&a>5){
		n = n*n*n;
		printf("O cubo do n�mero �: %.2f\n\n\n", n);
	}
	else{
		Printf("O n�mero permanece o mesmo.")
	}
	system("pause")
}
