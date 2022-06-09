#include <iostream>
#include <stdio.h>
#include <locale.h>
//Código que deve ser inserido aqui

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	
	int i,j;
	
    //Matriz com valores fixo para nao fazer a leitura
    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
    
    for(i=0;i<5;i++){
    	for(j=0;j<5;j++){
    		if(matriz[i][j] % 3 == 0 ){
				printf("Número divisível por 3 encontrado na linha %d, coluna %d, numero: %d \n",i,j,matriz[i][j]);
			}
		}	
	}
	
    return 0;
}

