#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char** argv) {
	
	int numap,maior,consumoL,menu,i;
	float cmtc;
	
	int apt,consumo[9999];
	setlocale(LC_ALL, "Portuguese");
	
	
	do{
		system("cls");
		printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>=====-=====<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf("\n--O programa retrona o maior valor gasto em Metros cubicos--\n");
		printf("\n>>>>>>>>>>Escolha qual programa deseja Inicializar:<<<<<<<<<<\n");
		printf("_____________________________________________________________\n");
		printf("\nPrograma 1: \nEspecificações: feito sem o uso de vetores\n \n");
		printf("_____________________________________________________________\n");
		printf("\nPrograma 2: \nEspecificações: feito com o uso de vetores\n \n");
		printf("_____________________________________________________________\n");
		printf("\n>>>>>>>>>>Escolha qual programa deseja Inicializar:<<<<<<<<<<\n");
		printf("\n>>>>>>> 1 - Programa 1 || 2 - Programa 2 || 3 - Sair <<<<<<<<\n");
		printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>=====-=====<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf("\n");
		scanf("%d=",&menu);
		fflush(stdin);
		system("pause");
		
	switch (menu){
		case 1:
			system("cls");
			printf("Programa 1 Escolido: \n");
			system("pause");
			system("cls");
			printf("\n====================================\n");
			printf("Informe o numero de apartamentos: ");
			scanf("%d*c",&numap);
			fflush(stdin);
			printf("\n====================================\n");
			
			maior = 1;
			
			for(i=0;i<numap;i++){
			printf("Insira o Consumo de agua do apartamento, %d em litros: ",i);
			scanf("%d",&consumoL);
			fflush(stdin);
			printf("\n====================================\n");
			if(consumoL > maior)
				maior = consumoL;
		}	
			cmtc = (maior/1000);
			
			printf("O maior gasto em metros cubicos foi: %.3f \n",cmtc);	
			printf("====================================\n");
			system("pause");
			break;
			
		case 2:
			system("cls");
			printf("Programa 2 Escolido: \n");
			system("pause");
			system("cls");
			printf("====================================\n");
			printf("Informe o numero de apartamentos: ");
			scanf("%d",&apt);
			fflush(stdin);
			printf("====================================\n");
			maior = 1;
			
			for(i=0;i<apt;i++){
			printf("Insira o Consumo de agua do apartamento, %d em litros: ",i);
			scanf("%d",&consumo[i]);
			fflush(stdin);	
			printf("====================================\n");
			if(consumo[i] > maior)
				maior = consumo[i];
				
				cmtc = (maior/1000);
		}	
			system("cls");
			
			for(i=0;i<apt;i++){
			printf("O apartamento %d gastou %d litros \n",i, consumo[i]);
			printf("====================================\n");
		}
			printf("O maior gasto em metros cubicos foi: %.3f\n",cmtc);	
			printf("====================================\n");
			system("pause");
	
			break;
			
			
		case 3:
			system("cls");
			printf("\n====================================\n");
			printf("\n>>>>>>>>>>>>>>>Saindo<<<<<<<<<<<<<<<\n");
			printf("\n====================================\n");
			break;
		default:
			system("cls");
			printf("====================================\n");
			printf("Escolha apenas as opções propostas");
			printf("====================================\n");
			system("pause");
			break;	
		}
	}while(menu != 3);
}
	
	
	


