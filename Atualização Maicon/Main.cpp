#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

#include "Pilha.c"
#include "Pilha.h"

#include "Fila.c"
#include "Fila.h"

#include "Lista.c"
#include "Lista.h"

#include "Menus.c"
#include "Menus.h"

#include "ListaGeral.c"
#include "ListaGeral.h"

#include "Selecao.c"
#include "Selecao.h"

int main() {
	int menu,cont_p=0,cont_f=0,cont_l=0;
	L_Geral *cab=NULL;

	setlocale(LC_ALL,"");

	Rep_Menu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - MENU PRINCIPAL\n");
	printf("________________________________________________________\n\n");
	printf("Pilhas existentes: %d\n",cont_p);
	printf("Filas existentes: %d\n",cont_f);
	printf("Listas existentes: %d\n",cont_l);
	printf("________________________________________________________\n\n");
	printf("Selecione a estrutura a ser manipulada:\n");
	printf("\t1 - Pilha\n");
	printf("\t2 - Fila\n");
	printf("\t3 - Lista\n");
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

		case 0:
			exit(1);
		break;

		default: printf("\nOpcao invalida");
			getch();
		break;
	}
	goto Rep_Menu;
}
