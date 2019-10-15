/*Funcao: quociente e resto da divisão
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int d = 0, di = 0, r = 0, q = 0;
	
	printf("Informe o dividendo: ");
	scanf("%i", &d);
	
		printf("Informe o divisor: ");
	scanf("%i", &di);
	
	q = d/di;
	r = d%di;
	
	printf("O quociente é: %i. E o resto é: %i\n\n\n", q,r);
	system("pause");
}
