#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"");
	
	float gratnat, he, hf;
	printf("Digite quantas horas extras o funcionário fez: ");
	scanf("%f", &he);
	
		if(he<0)	
			printf("Não é possivel ter horas extras negativas. Por Favor tente novamente!");
		else
			printf("Digite quantas horas-falta o funcionário possui: ");
			scanf("%f", &hf);
			
				if(hf<0)
					printf("O mínimo de horas-falta de um funcionário é 0. Por Favor tente novamente!");
				else
					gratnat = he - (hf/3) * 2;
						
						if(gratnat<60)
							printf("O funcionário irá receber uma gratificação de R$100,00!");
						else
							if(gratnat<120)
								printf("O funcionário irá receber uma gratificação de R$200,00!");
							else
								if(gratnat<180)
									printf("O funcionário irá receber uma gratificação de R$300,00!");
								else
									if(gratnat<240)
										printf("O funcionário irá receber uma gratificação de R$400,00!");
									else
										printf("O funcionário irá receber uma gratificação de R$500,00!");
										
							
							
							
	getch();
	//system("PAUSE");
	return 0;
}
