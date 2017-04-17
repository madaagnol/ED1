#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include "fila.h"
#include "fila.c"

int main()
{	
	setlocale(LC_ALL,"");
	
	int op,ver=0;
	Fila *f=NULL;
	do
	{
		system("cls");
		printf("\t\t    MENU FILAS:\n");
		printf("\t\t1-CRIAR FILA\n");
		printf("\t\t2-INSERIR ELEMENTO NA FILA\n");
		printf("\t\t3-REMOVER ELEMENTO DA FILA\n");
		printf("\t\t4-EXIBIR OS ELEMENTOS DA FILA\n");
		printf("\t\t5-EXCLUIR FILA\n");
		printf("\t\t0-SAIR\n");
		printf("\t\t  Opção:  ");
		scanf("%d",&op);
		
			switch(op)
			{
				case 0: 
					exit(0);
				break;
				
				case 1:
					f=fila_cria(f);
				break;
				
				case 2:
					fila_insere(f);
				break;
				
				case 3:
					fila_retira(f);
				break;
				
				case 4:
					fila_imprime(f);
				break;
				
				case 5:
				{
					fila_libera(f);
					free(f);
					f=NULL;
				}
					
				break;
				

			}
	}while(op!=0);
	
}
