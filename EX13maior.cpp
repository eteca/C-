/*Funcao: Mostra o maior
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float n1 = 0.0, n2=0.0, n3=0.0, m = 0.0, c = 0.0; 
	
	printf("Informe o primeiro número: ");
	scanf("%f", &n1);
	
	printf("Informe o segundo número: ");
	scanf("%f", &n2);
	
	printf("Informe o terceiro número: ");
	scanf("%f", &n3);
	
	m = n1;
	
	while (c < 2){
		if(n1>n2>n3){
			m = n1;
		}
		else if (n1>n3>n2){
			m = n1;
		}
		else if (n2>n3>n1){
			m = n2;
		}
		else if (n2>n1>n3){
			m = n2;
		}
		else if (n3>n1>n2){
			m = n3;
		}
		else if (n3>n2>n1){
			m = n3;
		}
		c = c + 1;
	}
	
	printf("O maior número é: %.2f \n\n\n", m);

	system("pause");	
}
