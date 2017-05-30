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
	L_Geral *cab=NULL;

	setlocale(LC_ALL,"");

	Rep_Menu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - MENU PRINCIPAL\n");
	printf("________________________________________\n\n");
	printf("Pilhas existentes: %d\n",cont_p);
	printf("Filas existentes: %d\n",cont_f);
	printf("Listas existentes: %d\n",cont_l);
	printf("________________________________________\n\n");
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
		//	MenuPilha();
		break;

		case 2:
		// 	MenuFila();
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

L_Geral * MenuLista(L_Geral *cab, int *cont_l)
{

	int menu, op_lista;

	returnLista: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - LISTAS\n");
	printf("________________________________________\n\n");
	printf("Listas existentes: %d\n", *cont_l);
	printf("________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Criar Lista\n");
	printf("\t2 - Excluir Lista\n");
	printf("\t3 - Exibir todas Listas\n");
	printf("\t4 - Selecionar Lista\n");
	printf("\t0 - Voltar\n");
	printf("\n\tOpção: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - CRIAÇÃO DE LISTA\n");
			printf("________________________________________\n\n");

			cab=CriarGeral(cab,'3',&(*cont_l));
			printf("\n\n\tLista Criada!");
			getch();
		break;

		case 2:
			seleciona_lista:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE LISTA\n");
			printf("________________________________________\n\n");
			ImprimirGeral(cab,'3');
			printf("\n________________________________________\n\n");


			printf("Número da lista à excluir: ");
			fflush(stdin);
			scanf("%d", &op_lista);

			if ((op_lista < 1) || (op_lista > *cont_l))
				goto seleciona_lista;

			cab=RetiraGeral(cab,op_lista);
			(*cont_l)--;
		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE LISTA\n");
			printf("________________________________________\n\n");
			ImprimirGeral(cab,'3');
			printf("\n________________________________________\n\n");
			printf("Pressione ENTER para voltar\n");
			getch();
		break;

		case 4:
			seleciona_lista2:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - SELEÇÃO DE LISTA\n");

			printf("________________________________________\n\n");
			ImprimirGeral(cab,'3');
			printf("\n________________________________________\n\n");


			printf("Número da lista à selecionar: ");
			fflush(stdin);
			scanf("%d", &op_lista);

			if ((op_lista < 1) || (op_lista > * cont_l))
				goto seleciona_lista2;

			cab=SelecaoLista(cab,op_lista);
		break;

		default:
			printf("\nOpção inválida");
			getch();
		break;

	}
	goto returnLista;
}

L_Geral* SelecaoLista(L_Geral *cab,int v)
{
	int menu,contador_percorre=1,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
		if(aux->flag=='3')
			contador_percorre++;

		aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - Lista %s\n",aux->nome);
	printf("________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
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
			printf("\n________________________________________\n\n");
			printf("\tDigite o numero a ser inserido na lista %s: ", aux->nome);
			fflush(stdin);
			scanf("%d", &resp);

			aux->estrutura.lista = InserirLista(aux->estrutura.lista, resp);
		break;

		case 2:
			printf("________________________________________\n\n");
			ImprimirLista(aux->estrutura.lista);
			printf("\n\n________________________________________\n\n");

			printf("\tDigite o item que deseja excluir:\n");
			scanf("%d",&resp);
			aux->estrutura.lista=RetiraLista(aux->estrutura.lista,resp);
		break;

		case 3:
		printf("\n\tLista %s: ",aux->nome);
			ImprimirLista(aux->estrutura.lista);
			getch();
		break;

		default:
		break;

	}
	goto returnmenu;
}
