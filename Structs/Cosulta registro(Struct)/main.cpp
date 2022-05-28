	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	#include <locale.h> 
	
	struct cadVacina
	{
			int	Codigo;
			char data[10]; 
			char vacina[10];
			char nome[50];
			char cpf;
			int  nlote;
	};
	
	int main(int argc, char** argv) {
		
		setlocale(LC_ALL, "Portuguese");
		
		int i,menu,qcv,qav,busca,acha;
		/*
		qcv: quantidade de cadastros de vacina
		qav: quantidade de aplicaçoes visiveis
		
		*/
		struct cadVacina ficha[i];
		
		
		
	do{
		
		printf("-------------------------------------------------------\n");
		printf(" Escolha uma opção: \n 1 - Cadastro de vacina \n 2 - Listar aplicações \n 3 - Consuta de Cpf \n 4 - Sair\n");
		printf("-------------------------------------------------------\n");
		scanf("%d", &menu);
		
		fflush(stdin);
		
		
		switch(menu)
		{
			case 1:
				printf("Quantos cadastros serão realizados?\n");
				scanf("%d", &qcv);
				fflush(stdin);
				system("cls");
				
				
			for( i=0; i < qcv; i++)
			{
				
				printf("Seu codigo é: %d\n", &ficha[i].Codigo);
				
				printf("Insira o nome:\n");
				scanf("%50[^\n]s", &ficha[i].nome);
				fflush(stdin);
				
				printf("Insira o Cpf: (Formato: 000.000.000-00)\n");
				scanf("%14[^\n]s", &ficha[i].cpf);
				fflush(stdin);
				
				printf("Insira a Vacina administrada:\n");
				scanf("%10[^\n]s", &ficha[i].vacina);
				fflush(stdin);
				
				printf("Insira a data: (Formato: 00/00/0000)\n");
				scanf("%10[^\n]s", &ficha[i].data);
				fflush(stdin);
				
				printf("Insira o numero do lote da vacina:\n");
				scanf("%d", &ficha[i].nlote);
				fflush(stdin);
				system("pause");
			}
			break;
			
			case 2:
				system("cls");
				
				printf("Aplicações disponiveis: %d \n",qcv );
			
				for( i=0; i < qcv; i++)
				{	
					printf("==================================\n");
					printf("\n Codigo: %d\n", &ficha[i].Codigo);
					printf("\n Nome: %s\n", &ficha[i].nome);
					printf("\n Cpf: %s\n", &ficha[i].cpf);
					printf("\n Vacina: %s\n", &ficha[i].vacina);
					printf("\n Data: %s\n", &ficha[i].data);
					printf("\n Numero do lote: %d\n", &ficha[i].nlote);
					printf("==================================\n");
					system("pause");
				}
				 
			break;		
			
			case 3:
				system("cls");
				printf("Digite o CPF que deseja consultar: \n");
				scanf("%s", &busca);
				i = 0;
				acha = 0;
				while((i <qcv) && (acha == 0))
				{
				if (ficha[i].cpf == busca)
				{
					acha = 1;
				}
				else
					i++;
				}
				if (acha == 1 )
				{
					printf("CPF encontrado: %s/n", ficha[i].cpf);
				}
				else
				printf("CPF nâo encontrado");
			
			break;
			
			case 4:
				system("cls");
				printf("saindo");
			break;
			
			default: 
				system("cls");
				printf("Opção Invalida\n");
			break;
		}
	}
	while(menu !=4 );
		return 0;
	}

