#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include "pilha.h"
#include "pilha.c"

int main()
{	
	setlocale(LC_ALL,"");
	
	int op;
	Pilha *p=NULL;
	do
	{
		system("cls");
		printf("\t\t    MENU PILHAS:\n");
		printf("\t\t1-CRIAR PILHA\n");
		printf("\t\t2-INSERIR ELEMENTO NA PILHA\n");
		printf("\t\t3-REMOVER ELEMENTO DA PILHA\n");
		printf("\t\t4-VER O ELEMENTO DO TOPO DA PILHA\n");
		printf("\t\t5-EXIBIR OS ELEMENTOS DA PILHA\n");
		printf("\t\t6-EXCLUIR PILHA\n");
		printf("\t\t0-SAIR\n");
		printf("\t\t  Opção:  ");
		scanf("%d",&op);
		
			switch(op)
			{
				case 0: exit(0);
				break;
				
				case 1:
					p=pilha_cria(p);
				break;
				
				case 2:
					pilha_push(p);
				break;
				
				case 3:
					pilha_pop(p);
				break;
				
				case 4:
					pilha_ver_topo(p);
				break;
				
				case 5:
					pilha_imprime(p);
				break;
				
				case 6:
				{
					pilha_libera(p);
					p=NULL;	
				}
					
				break;
			}
	}while(op!=0);
	
}
