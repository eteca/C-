/*Fun��o: M�dia final aluno
Autor: Giovana Caires Ramos e Matheus Gabriel e Silva
Data:16/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	float mf = 0.0;
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	gets(nome);
	
	
	printf("Informe sua m�dia final: ");
	scanf("%f", &mf);
	
		printf("\n\n");
	
	if(mf>=7){
		printf("Parab�ns %s voc� foi aprovadX!!!",nome);
	}
	else{
		printf("Parab�ns %s voc� foi reprovadX!!!!<3",nome);
	}
		
		printf("\n\n\n");
	
	system("pause");
}
