#include "Menus.h"
#include "Selecao.h"
#include "Selecao.c"


L_Geral* MenuPilha(L_Geral *cab, int *cont_p)
{

	int menu, op_pilha;

	returnPilha: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - PILHAS\n");
	printf("________________________________________________________\n\n");
	printf("\tPilhas existentes: %d\n", *cont_p);
	printf("________________________________________________________\n\n");

	printf("\tSelecione a opção:\n");
	printf("\t1 - Criar uma pilha\n");
	printf("\t2 - Excluir uma pilha\n");
	printf("\t3 - Exibir todas as pilhas\n");
	printf("\t4 - Selecionar uma pilha\n");
	printf("\t0 - Voltar\n");
	printf("\n\tOpção: ");
	scanf("%d", &menu);
	printf("\n\n________________________________________________________\n\n");
	
	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - CRIAÇÃO DE PILHA\n");
			printf("________________________________________________________\n\n");

			cab=CriarGeral(cab,'1',&(*cont_p));
			printf("\n\n\tPilha criada.");
			getch();
		break;

		case 2:
			seleciona_pilha:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE PILHA\n");
			printf("________________________________________________________\n\n");

			if(*cont_p==0)
			{
				printf("\tNão há pilhas. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'1');
				printf("\n________________________________________________________\n\n");

				printf("\tNúmero da pilha: ");
				fflush(stdin);
				scanf("%d", &op_pilha);

				if ((op_pilha < 1) || (op_pilha > *cont_p))
					goto seleciona_pilha;

				cab=RetiraGeral(cab,op_pilha,'1');
				(*cont_p)--;
			}

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE PILHA\n");
			printf("________________________________________________________\n\n");
			if(*cont_p==0)
			{
				printf("\tNão há pilhas. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'1');
				printf("________________________________________________________\n\n");
				printf("\tPressione ENTER para voltar.");
			}
			getch();
		break;

		case 4:

			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - SELEÇÃO DE PILHA\n");

			printf("________________________________________________________\n\n");

			if(*cont_p==0)
			{
				printf("\tNão há pilhas.Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'1');
				printf("\n________________________________________________________\n\n");


				seleciona_pilha2:printf("\tNúmero da pilha: ");
				fflush(stdin);
				scanf("%d", &op_pilha);


				if ((op_pilha < 1) || (op_pilha > * cont_p))
					goto seleciona_pilha2;
				


				cab=SelecaoPilha(cab,op_pilha);
			}
		break;

		default:
			printf("\nOpção inválida.");
			getch();
		break;

	}
	goto returnPilha;
}


L_Geral * MenuFila(L_Geral *cab, int *cont_f)
{

	int menu, op_fila;

	returnFilas: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - FILAS\n");
	printf("________________________________________________________\n\n");
	printf("\tFilas existentes: %d\n", *cont_f);
	printf("________________________________________________________\n\n");

	printf("\tSelecione a opção:\n");
	printf("\t1 - Criar uma fila\n");
	printf("\t2 - Excluir uma fila\n");
	printf("\t3 - Exibir todas as filas\n");
	printf("\t4 - Selecionar uma fila\n");
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
			printf("TRABALHO ESTRUTURA DE DADOS I - CRIAÇÃO DE FILA\n");
			printf("________________________________________________________\n\n");

			cab=CriarGeral(cab,'2',&(*cont_f));
			printf("\n\n\tFila criada.");
			getch();
		break;

		case 2:
			seleciona_fila:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE FILA\n");
			printf("_________________________________________________\n\n");

			if(*cont_f==0)
			{
				printf("\tNão há filas. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'2');
				printf("\n________________________________________________________\n\n");

				printf("\tNúmero da fila: ");
				fflush(stdin);
				scanf("%d", &op_fila);

				if ((op_fila < 1) || (op_fila > *cont_f))
					goto seleciona_fila;

				cab=RetiraGeral(cab,op_fila,'2');
				(*cont_f)--;
			}

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE FILA\n");
			printf("________________________________________________________\n\n");
			if(*cont_f==0)
			{
				printf("\tNão há filas. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'2');
				printf("________________________________________________________\n\n");
				printf("\tPressione ENTER para voltar");
			}
			getch();
		break;

		case 4:

			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - SELEÇÃO DE FILA\n");

			printf("________________________________________________________\n\n");

			if(*cont_f==0)
			{
				printf("\tNão há filas. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'2');
				printf("________________________________________________________\n\n");


				seleciona_fila2:printf("\tNúmero da fila: ");
				fflush(stdin);
				scanf("%d", &op_fila);


				if ((op_fila < 1) || (op_fila > * cont_f))
					goto seleciona_fila2;

				cab=SelecaoFila(cab,op_fila);
			}
		break;

		default:
			printf("\nOpção inválida");
			getch();
		break;

	}
	goto returnFilas;
}


L_Geral * MenuLista(L_Geral *cab, int *cont_l)
{

	int menu, op_lista;

	returnLista: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - LISTAS\n");
	printf("________________________________________________________\n\n");
	printf("\tListas existentes: %d\n", *cont_l);
	printf("________________________________________________________\n\n");

	printf("\tSelecione a opção:\n");
	printf("\t1 - Criar uma lista\n");
	printf("\t2 - Excluir uma lista\n");
	printf("\t3 - Exibir todas as listas\n");
	printf("\t4 - Selecionar uma lista\n");
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
			printf("________________________________________________________\n\n");

			cab=CriarGeral(cab,'3',&(*cont_l));
			printf("\n\tLista criada.");
			getch();
		break;

		case 2:
			seleciona_lista:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE LISTA\n");
			printf("_________________________________________________\n\n");

			if(*cont_l==0)
			{
				printf("\tNão há listas. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'3');
				printf("\n________________________________________________________\n\n");

				printf("\tNúmero da lista: ");
				fflush(stdin);
				scanf("%d", &op_lista);

				if ((op_lista < 1) || (op_lista > *cont_l))
					goto seleciona_lista;

				cab=RetiraGeral(cab,op_lista,'3');
				(*cont_l)--;
			}

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE LISTA\n");
			printf("________________________________________________________\n\n");
			if(*cont_l==0)
			{
				printf("\tNão há listas. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'3');
				printf("\n________________________________________________________\n\n");
				printf("\tPressione ENTER para voltar.");
			}
			getch();
		break;

		case 4:

			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - SELEÇÃO DE LISTA\n");

			printf("________________________________________________________\n\n");

			if(*cont_l==0)
			{
				printf("\tNão há listas. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'3');
				printf("\n________________________________________________________\n\n");


				seleciona_lista2:printf("\tNúmero da lista: ");
				fflush(stdin);
				scanf("%d", &op_lista);


				if ((op_lista < 1) || (op_lista > * cont_l))
					goto seleciona_lista2;

				cab=SelecaoLista(cab,op_lista);
			}
		break;

		default:
			printf("\nOpção inválida");
			getch();
		break;

	}
	goto returnLista;
}


L_Geral * MenuArvBB(L_Geral *cab, int *cont_a)
{

	int menu, op_lista;

	returnArvBB: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - ÁRVORES \n");
	printf("________________________________________________________\n\n");
	printf("\tÁrvores de busca existentes: %d\n", *cont_a);
	printf("________________________________________________________\n\n");

	printf("\tSelecione a opção:\n");
	printf("\t1 - Criar uma árvore de busca\n");
	printf("\t2 - Excluir uma árvore de busca\n");
	printf("\t3 - Exibir todas as árvore de busca\n");
	printf("\t4 - Selecionar uma árvore de busca\n");
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
			printf("TRABALHO ESTRUTURA DE DADOS I - CRIAÇÃO DE ÁRVORE\n");
			printf("________________________________________________________\n\n");

			cab=CriarGeral(cab,'4',&(*cont_a));
			printf("\n\tArvBB criada.");
			getch();
		break;

		case 2:
			seleciona_arvbb:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE ÁRVORE\n");
			printf("_________________________________________________\n\n");

			if(*cont_a==0)
			{
				printf("\tNão há árvores. Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'4');
				printf("\n________________________________________________________\n\n");

				printf("\tNúmero da lista : ");
				fflush(stdin);
				scanf("%d", &op_lista);

				if ((op_lista < 1) || (op_lista > *cont_a))
					goto seleciona_arvbb;

				cab=RetiraGeral(cab,op_lista,'4');
				(*cont_a)--;
			}

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE ÁRVORE\n");
			printf("________________________________________________________\n\n");
			if(*cont_a==0)
			{
				printf("\tNão há árvores. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'4');
				printf("\n________________________________________________________\n\n");
				printf("\tPressione ENTER para voltar.");
			}
			getch();
		break;

		case 4:

			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - SELEÇÃO DE ÁRVORE\n");

			printf("________________________________________________________\n\n");

			if(*cont_a==0)
			{
				printf("\tNão há árvores. Pressione ENTER para voltar.\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'4');
				printf("\n________________________________________________________\n\n");


				seleciona_lista2:printf("\tNúmero da árvore: ");
				fflush(stdin);
				scanf("%d", &op_lista);


				if ((op_lista < 1) || (op_lista > * cont_a))
					goto seleciona_lista2;
				

				cab=SelecaoArvBB(cab,op_lista);
			}
		break;

		default:
			printf("\nOpção inválida");
			getch();
		break;

	}
	goto returnArvBB;
}
