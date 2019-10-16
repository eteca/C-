/*Função: lê três números inteiros e exibe eles em ordem crescente
Autor: Giovana Caires Ramos
Data:16/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	int a = 0, b=0, c=0, cont = 0, maior=0, medio=0, menor=0; 
	
	printf("Informe um número: ");
	scanf("%i", &a);
	
	printf("Informe outro número: ");
	scanf("%i", &b);
	
	printf("Informe mais um número: ");
	scanf("%i", &c);
	
	maior = a;
	
	while (cont < 1){
		if(b > a && b > c){
			maior = b;
			if(a > c){
				medio = a;
				menor = c;
			}else{
				medio = c;
				menor = a;	
			}
		}
		else if (c > a && c > b){
			maior = c;
			if(a > b){
				medio = a;
				menor = b;
			}else{
				medio = b;
				menor = a;	
			}
		}
		else if (a > b && a > c){
			maior = a;
			if(c > b){
				medio = c;
				menor = b;
			}else{
				medio = b;
				menor = c;	
			}
		}
		cont = cont + 1;
	}
	
	
	printf("\nOs números em ordem crescente: %i, %i e %i \n\n\n", menor, medio, maior);

	system("pause");	
}
