/*Fun��o: �mpar ou par
Autor: Giovana Caires Ramos e Matheus Gabriel e Silva
Data:16/10/2019
*/
#include<stdio.h>
#include<windows.h>
#include<locale.h>

int main(){
		setlocale(LC_ALL, "Portuguese");
		int n = 0;
		
		printf("informe o n�mero desejado: ");
		scanf("%i", &n);
		
			printf("\n\n");
		
		if(n%2==0){
			 printf("Seu n�mero � par");
		}
		else{
			printf("Seu n�mero � �mpar");
		}
		
		printf("\n\n\n");
			
		system("pause");
}
