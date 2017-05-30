#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include "lista.h"
#include "lista.c"
#include "listageral.c"
#include "listageral.h"

//void MenuPilha();
//void MenuFila();

L_Geral * MenuLista(L_Geral* cab, int *cont_l);
L_Geral* SelecaoLista(L_Geral *cab,int v);

int main() {
	int menu,cont_p=0,cont_f=0,cont_l=0;
	setlocale(LC_ALL,"");
	L_Geral *list=NULL;

	Rep_Menu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");

	printf("Pilhas existentes: %d\n",cont_p);
	printf("Filas existentes: %d\n",cont_f);
	printf("Listas existentes: %d\n",cont_l);
	printf("________________________________________\n\n");
	ImprimirGeral(list,'3');
	printf("________________________________________\n\n");
	printf("Selecione a estrutura a ser manipulada:\n");
	printf("\t1 - Pilha\n");
	printf("\t2 - Fila\n");
	printf("\t3 - Lista\n");
	printf("\t0 - Sair\n");
	printf("\nOpção: ");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
		//	MenuPilha();
		break;

		case 2:
		// 	MenuFila();
		break;

		case 3:
			list=MenuLista(list, &cont_l);
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

L_Geral * MenuLista(L_Geral *cab, int *cont_l)
{
	L_Geral *no_list, *aux, *aux_percorre;
	Lista *nova_lista,*imp;

	int menu,resp,i, contador_percorre, op_lista;
	returnLista: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");

	printf("Listas existentes: %d\n\n\n", *cont_l);
	printf("________________________________________\n\n");

	printf("Selecione a opcao a ser manipulada:\n");
	printf("\t1 - Criar Lista\n");
	printf("\t2 - Excluir Lista\n");
	printf("\t3 - Exibir todas Listas\n");
	printf("\t4 - Selecionar Lista\n");
	printf("\t0 - Voltar\n");
	printf("\nOpção: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
			cab=CriarGeral(cab,'3',&(*cont_l));
			printf("\n\nLista Criada!");
			getch();
		break;

		case 2:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
			ImprimirGeral(cab,'3');

			seleciona_lista:
			printf("Digite o numero da lista desejada para excluir: ");
			fflush(stdin);
			scanf("%d", &op_lista);

			if ((op_lista < 1) || (op_lista > * cont_l))
				goto seleciona_lista;

			cab=RetiraGeral(cab,op_lista);
			(*cont_l)--;
		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
			ImprimirGeral(cab,'1');
			ImprimirGeral(cab,'2');
			ImprimirGeral(cab,'3');
			getch();
		break;

		case 4:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I\n\n");

			printf("________________________________________\n\n");

			ImprimirGeral(cab,'3');

			printf("________________________________________\n\n");

			seleciona_lista2:
			printf("Digite o numero da lista � selecionar: ");
			fflush(stdin);
			scanf("%d", &op_lista);

			if ((op_lista < 1) || (op_lista > * cont_l))
				goto seleciona_lista2;

			cab=SelecaoLista(cab,op_lista);
		break;

		default: printf("\nOpção inválida");
		getch();

	}
	goto returnLista;
}

L_Geral* SelecaoLista(L_Geral *cab,int v)
{
	int menu,contador_percorre=1,resp;
	L_Geral *aux_percorre=cab;
	while (contador_percorre<v)
	{
		if(aux_percorre->flag=='3')
		contador_percorre++;

		aux_percorre=aux_percorre->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I\n");

	printf("________________________________________\n\n");

	printf("Selecione a op��o a ser manipulada:\n");
	printf("\t1 - Inserir na Lista\n");
	printf("\t2 - Excluir  da Lista\n");
	printf("\t3 - Exibir Lista\n");
	printf("\t0 - Voltar\n");
	printf("\nOpção: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:

			printf("\n\nDigite o numero a ser inserido na lista %s: ", aux_percorre->nome);
			fflush(stdin);
			scanf("%d", &resp);

			aux_percorre->estrutura.lista = InserirLista(aux_percorre->estrutura.lista, resp);
		break;

		case 2:

			ImprimirLista(aux_percorre->estrutura.lista);
			printf("\n\n________________________________________\n\n");

			printf("Digite o item que deseja excluir:\n");
			scanf("%d",&resp);
			RetiraLista(aux_percorre->estrutura.lista,resp);

		break;

		case 3:
			ImprimirLista(aux_percorre->estrutura.lista);
			getch();
		break;

		default:
		break;

	}
	goto returnmenu;
}
