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
		
	struct	cadastro cad[999];
	int i,cont,arm,menu,resp,esc;
	char busca[15];	
	
	void cadastrar();
	void listar();
	void pesquisar();
	void codigo();
	
	void codigo(){
			printf("Seu codigo é %d\n",i);

		return;
	}
	
	void cadastrar(){
				struct	cadastro cad[999];
				
				do{
					printf("=========================\n");
					
					codigo();
					
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
					printf("deseja cadastrar Mais?\n 1 - 2im || 2 - não \n");
					scanf("%d",&resp);
					fflush(stdin);
					
	}while (resp == 1);
	return;
}
	void listar (){
			struct	cadastro cad[999];

				if(cont);
				printf("Cadastros disponiveis: %d\n", cont);
				
				for(i=0 ; i<cont ;i++){
					printf("=========================\n");
					printf("Código: %d\n",cad[i].codigo);
				
					printf("Nome: %s\n",cad[i].nome);
					
					printf("CPF: %s\n",cad[i].cpf);
					
					printf("Vacina: %s\n",cad[i].vacina);
					
					printf("Data: %s\n",cad[i].data);
					
					printf("Lote: %d\n",cad[i].lote);
					
					printf("=========================\n");
					
					
	}
	return ;
}
	void pesquisar(){
				struct	cadastro cad[999];

				if(cont ==  0){
					printf("sem Cpfs cadastrados\n");
				}else{
					printf("CPFS disponiveis pra consulta, %d\n",cont);
				printf("Digite o CPF que deseja buscar\n");
				scanf("%s", &busca);
				fflush(stdin);
				for(i=0;i<cont;i++){
					if(strcmp(busca, cad[i].cpf) == 0){
   			 			printf("CPF  encontrado %s\n",cad[i].cpf);
   			 			printf("Deseja ver vinculos?\n1 - Sim || Outro - Não\n");
   			 			scanf("%d",&esc);
   			 			fflush(stdin);
   			 			system("cls");
   			 		
						if(esc == 1){
   			 					printf("=========================\n");	
   			 					printf("Código: %d\n",cad[i].codigo);
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
						printf("CPF não encontrado\n");
					}
				}
				}
				
				system("pause");
				return; 
	}
	
		
		
	int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");

	
      	
	do{	
		printf("--------------------------------\n");
		printf("Selecione uma opção:\n 1 - Cadastrar\n 2 - Listar\n 3 - Consultar\n 4 - Sair\n");
		printf("--------------------------------\n");
		scanf("%d", &menu);
		fflush(stdin);
		system("cls");
		
		switch (menu){
			
			case 1 :
				 cadastrar();
				break;
				
			case 2 :
				listar();	
				break;
					
			case 3 :	
				pesquisar();	
				break;	
				
			case 4 :
				system("cls");
				printf("Saindo");
				break;
			
			default:
				system("cls");
				printf("Opção invalida! Insira uma opção apresentada\n");
				system("pause");
				break;
			}
      		
	 }while (menu != 4);
	 
}
