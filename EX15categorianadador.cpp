/*Função: Classifica um nadador de acordo com sua idade
Autor: Matheus Gabriel e Silva e Giovana Caires Ramos
Data:16/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i = 0;
	
		printf("Informe sua idade por favor: ");
		scanf("%i", &i);
		
		printf("\n\n");
	
		if(i>=5 && i<=11){
			printf("Você faz parte da categoria infantil");
		}
	
		else if (i>=12 && i<=17){
			printf("Você faz parte da categoria juvenil");
		}
	
		else if (i>=18){
			printf("Você faz parte da categoria adulto");
		}
		printf("\n\n\n");
	system("pause");	
}
