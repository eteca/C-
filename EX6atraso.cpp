/*Funcao: DEscobre o pre�o de um terreno ret�ngular
Autor: Giovana Caires Ramos
Data: 15/10/2019
*/

#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	float vp = 0.0, vt = 0.0, t = 0.0, p = 0.0;
	
	printf("Informe o valor da presta��o: ");
	scanf("%f", &vp);
	
	printf("Informe o valor da taxa: ");
	scanf("%f", &vt);
	
	printf("Informe quanto tempo ela est� atrasada (meses): ");
	scanf("%f", &t);
	
	p = vp+(vp*(vt/100)*t);
	
	printf("O pre�o do atraso �: %.2f\n\n\n", p);
	system("pause");
}
