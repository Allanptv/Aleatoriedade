#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	float gratnat, he, hf;
	printf("Digite quantas horas extras o funcion�rio fez: ");
	scanf("%f", &he);
	
		if(he<0)	
			printf("N�o � possivel ter horas extras negativas. Por Favor tente novamente!");
		else
			printf("Digite quantas horas-falta o funcion�rio possui: ");
			scanf("%f", &hf);
			
				if(hf<0)
					printf("O m�nimo de horas-falta de um funcion�rio � 0. Por Favor tente novamente!");
				else
					gratnat = he - (hf/3) * 2;
						
						if(gratnat<60)
							printf("O funcion�rio ir� receber uma gratifica��o de R$100,00!");
						else
							if(gratnat<120)
								printf("O funcion�rio ir� receber uma gratifica��o de R$200,00!");
							else
								if(gratnat<180)
									printf("O funcion�rio ir� receber uma gratifica��o de R$300,00!");
								else
									if(gratnat<240)
										printf("O funcion�rio ir� receber uma gratifica��o de R$400,00!");
									else
										printf("O funcion�rio ir� receber uma gratifica��o de R$500,00!");
										
							
							
							
	getch();
	//system("PAUSE");
	return 0;
}
