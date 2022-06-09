#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>	
	
	
	struct cadastro{
		int codigo;
		char nome[100];
		char cpf[15];
		char vacina[20];
		char data[11];
		int lote;
	};
		
		
		
		
	int main(int argc, char** argv) {
		int i,cont,arm,menu,resp,esc;
		char busca[15];
		struct	cadastro cad[999];
		setlocale(LC_ALL, "Portuguese");
	
		
      	
	do{	
		system("cls");
		printf("--------------------------------\n");
		printf("Selecione uma op��o:\n 1 - Cadastrar\n 2 - Listar\n 3 - Consultar\n 4 - Sair\n");
		printf("--------------------------------\n");
		scanf("%d", &menu);
		fflush(stdin);
		system("cls");
		
		switch (menu){
			
			case 1 :
				system("cls");
				
				while (resp == 1){
					printf("=========================\n");
					printf("Seu codigo � %d\n", cad[i].codigo);
					
					printf("Digite o nome\n");
					scanf("%s", &cad[i].nome);
					fflush(stdin);
					
					printf("Digite o cpf Formato(000.000.000-00)\n");
					scanf("%s", &cad[i].cpf);
					fflush(stdin);
					
					printf("Digite a vacina administrada\n");
					scanf("%s", &cad[i].vacina);
					fflush(stdin);
					
					printf("Digite a data Formato(00/00/0000)\n");
					scanf("%s", &cad[i].data);
					fflush(stdin);
					
					printf("Digite o lote\n");
					scanf("%d", &cad[i].lote);
					fflush(stdin);
					printf("=========================\n");
					
					i++;
					cont = i;
					printf("deseja cadastrar Mais?\n 1 - 2im || 2 - n�o \n");
					scanf("%d",&resp);
					fflush(stdin);
				}
					break;
			case 2 :
				system("cls"); 
				if(cont)
				printf("Cadastros disponiveis: %d\n", cont);
				
				for(i=0 ; i<cont ;i++){
					printf("=========================\n");
					printf("C�digo: %d\n",cad[i].codigo);
				
					printf("Nome: %s\n",cad[i].nome);
					
					printf("CPF: %s\n",cad[i].cpf);
					
					printf("Vacina: %s\n",cad[i].vacina);
					
					printf("Data: %s\n",cad[i].data);
					
					printf("Lote: %d\n",cad[i].lote);
					
					printf("=========================\n");
				}
				system("pause");
				break;	
				
			case 3 :
				if(cont >1000){
					printf("sem Cpfs cadastrados");
				}else{
					printf("CPFS disponiveis pra consulta, %d\n",cont);
				printf("Digite o CPF que deseja buscar\n");
				scanf("%s", &busca);
				fflush(stdin);
				for(i=0;i<cont;i++){
					if(strcmp(busca, cad[i].cpf) == 0){
   			 			printf("CPF  encontrado %s\n",cad[i].cpf);
   			 			printf("Deseja ver vinculos?\n1 - Sim || Outro - N�o\n");
   			 			scanf("%d",&esc);
   			 			fflush(stdin);
   			 			system("cls");
   			 		
						if(esc == 1){
   			 					printf("=========================\n");	
   			 					printf("C�digo: %d\n",cad[i].codigo);
								printf("Nome: %s\n",cad[i].nome);
								printf("CPF: %s\n",cad[i].cpf);
								printf("Vacina: %s\n",cad[i].vacina);
								printf("Data: %s\n",cad[i].data);
								printf("Lote: %d\n",cad[i].lote);
								printf("=========================\n");	
   			 			}else{
   			 				printf("Saindo....");
							}
					}else {
						printf("CPF n�o encontrado\n");
					}
				}
				}
				
				system("pause");
				
				break;	
				
			case 4 :
				system("cls");
				printf("Saindo");
				break;
			
			default:
				system("cls");
				printf("Op��o invalida! Insira uma op��o apresentada\n");
				system("pause");
				break;
			}
      		
	 }while (menu != 4);
    return 0;
}
