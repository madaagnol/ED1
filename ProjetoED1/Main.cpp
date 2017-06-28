#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

#include "Menus.c"
#include "Menus.h"

int main() {
	int menu,cont_p=0,cont_f=0,cont_l=0,cont_a=0,i,j;
	L_Geral *cab=NULL;

	setlocale(LC_ALL,"");

	Rep_Menu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - MENU PRINCIPAL\n");
	printf("________________________________________________________\n\n");
	printf("\tPilhas existentes: %d\n",cont_p);
	printf("\tFilas existentes:  %d\n",cont_f);
	printf("\tListas existentes: %d\n",cont_l);
	printf("\tÁrvore existentes: %d\n",cont_a);
	printf("________________________________________________________\n\n");
	printf("\tSelecione a estrutura:\n");
	printf("\t1 - Pilha\n");
	printf("\t2 - Fila\n");
	printf("\t3 - Lista\n");
	printf("\t4 - Árvore\n");
	printf("\t0 - Sair\n");
	printf("\n\tOpção: "); 
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			cab=MenuPilha(cab, &cont_p);
		break;

		case 2:
		 	cab=MenuFila(cab, &cont_f);
		break;

		case 3:
			cab=MenuLista(cab, &cont_l);
		break;
		
		case 4:
			cab=MenuArvBB(cab, &cont_a);
		break;

		case 0:
			for(i=1;i<=4;i++)
			{
				if(i==1)
					for(j=1;j<=cont_p;j++)
						RetiraGeral(cab,j,i);
					
				if(i==2)
					for(j=1;j<=cont_f;j++)
						RetiraGeral(cab,j,i);
							
				if(i==3)
					for(j=1;j<=cont_l;j++)
						RetiraGeral(cab,j,i);
					
				if(i==4)
					for(j=1;j<=cont_a;j++)
						RetiraGeral(cab,j,i);
				
			}
			cab=NULL;
			exit(1);
		break;

		default: printf("\nOpcao invalida");
			getch();
		break;
	}
	goto Rep_Menu;
}
