#include "Menus.h"
#include "Selecao.h"


L_Geral * MenuPilha(L_Geral *cab, int *cont_p)
{

	int menu, op_pilha;

	returnPilha: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - PILHAS\n");
	printf("________________________________________________________\n\n");
	printf("Pilhas existentes: %d\n", *cont_p);
	printf("________________________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Criar Pilha\n");
	printf("\t2 - Excluir Pilha\n");
	printf("\t3 - Exibir todas Pilhas\n");
	printf("\t4 - Selecionar Pilha\n");
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
			printf("TRABALHO ESTRUTURA DE DADOS I - CRIAÇÃO DE PILHA\n");
			printf("________________________________________________________\n\n");

			cab=CriarGeral(cab,'1',&(*cont_p));
			printf("\n\n\tPilha Criada!");
			getch();
		break;

		case 2:
			seleciona_pilha:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE PILHA\n");
			printf("_________________________________________________\n\n");

			if(*cont_p==0)
			{
				printf("\tNão há pilhas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'1');
				printf("\n________________________________________________________\n\n");

				printf("Número da pilha à excluir: ");
				fflush(stdin);
				scanf("%d", &op_pilha);

				if ((op_pilha < 1) || (op_pilha > *cont_p))
					goto seleciona_pilha;

				cab=RetiraGeral(cab,op_pilha);
				(*cont_p)--;
			}

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE PILHA\n");
			printf("________________________________________________________\n\n");
			if(*cont_p==0)
			{
				printf("\tNão há pilhas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'1');
				printf("\n________________________________________________________\n\n");
				printf("\tPressione ENTER para voltar");
			}
			getch();
		break;

		case 4:

			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - SELEÇÃO DE PILHA\n");

			printf("________________________________________________________\n\n");

			if(*cont_p==0)
			{
				printf("\tNão há pilhas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'1');
				printf("\n________________________________________________________\n\n");


				seleciona_pilha2:printf("Número da pilha à selecionar: ");
				fflush(stdin);
				scanf("%d", &op_pilha);


				if ((op_pilha < 1) || (op_pilha > * cont_p))
					goto seleciona_pilha2;
				


				cab=SelecaoPilha(cab,op_pilha);
			}
		break;

		default:
			printf("\nOpção inválida");
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
	printf("Filass existentes: %d\n", *cont_f);
	printf("________________________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Criar Filas\n");
	printf("\t2 - Excluir Filas\n");
	printf("\t3 - Exibir todas Filass\n");
	printf("\t4 - Selecionar Filas\n");
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
			printf("\n\n\tFilas Criada!");
			getch();
		break;

		case 2:
			seleciona_fila:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE FILA\n");
			printf("_________________________________________________\n\n");

			if(*cont_f==0)
			{
				printf("\tNão há filas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'2');
				printf("\n________________________________________________________\n\n");

				printf("Número da fila à excluir: ");
				fflush(stdin);
				scanf("%d", &op_fila);

				if ((op_fila < 1) || (op_fila > *cont_f))
					goto seleciona_fila;

				cab=RetiraGeral(cab,op_fila);
				(*cont_f)--;
			}

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE FILA\n");
			printf("________________________________________________________\n\n");
			if(*cont_f==0)
			{
				printf("\tNão há filas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'2');
				printf("\n________________________________________________________\n\n");
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
				printf("\tNão há filas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'2');
				printf("\n________________________________________________________\n\n");


				seleciona_fila2:printf("Número da fila à selecionar: ");
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
	printf("Listas existentes: %d\n", *cont_l);
	printf("________________________________________________________\n\n");

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
			printf("TRABALHO ESTRUTURA DE DADOS I - CRIAÇÃO DE ÁRVORE\n");
			printf("________________________________________________________\n\n");

			cab=CriarGeral(cab,'3',&(*cont_l));
			printf("\n\n\tLista Criada!");
			getch();
		break;

		case 2:
			seleciona_lista:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE ÁRVORE\n");
			printf("_________________________________________________\n\n");

			if(*cont_l==0)
			{
				printf("\tNão há listas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'3');
				printf("\n________________________________________________________\n\n");

				printf("Número da lista à excluir: ");
				fflush(stdin);
				scanf("%d", &op_lista);

				if ((op_lista < 1) || (op_lista > *cont_l))
					goto seleciona_lista;

				cab=RetiraGeral(cab,op_lista);
				(*cont_l)--;
			}

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE ÁRVORE\n");
			printf("________________________________________________________\n\n");
			if(*cont_l==0)
			{
				printf("\tNão há listas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'3');
				printf("\n________________________________________________________\n\n");
				printf("\tPressione ENTER para voltar");
			}
			getch();
		break;

		case 4:

			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - SELEÇÃO DE ÁRVORE\n");

			printf("________________________________________________________\n\n");

			if(*cont_l==0)
			{
				printf("\tNão há listas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'3');
				printf("\n________________________________________________________\n\n");


				seleciona_lista2:printf("Número da lista à selecionar: ");
				fflush(stdin);
				scanf("%d", &op_lista);


				if ((op_lista < 1) || (op_lista > * cont_l))
				{

					printf("\r");
			        for (int j = 0; j < 30; j++) {
			            printf(" "); // apaga a linha anterior
			        }
			        printf("\r");
					goto seleciona_lista2;
				}


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
	printf("TRABALHO ESTRUTURA DE DADOS I - ÁRVORES\n");
	printf("________________________________________________________\n\n");
	printf("ArvBBs existentes: %d\n", *cont_a);
	printf("________________________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Criar ArvBB\n");
	printf("\t2 - Excluir ArvBB\n");
	printf("\t3 - Exibir todas ArvBBs\n");
	printf("\t4 - Selecionar ArvBB\n");
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
			printf("\n\n\tArvBB Criada!");
			getch();
		break;

		case 2:
			seleciona_arvbb:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - EXCLUSÃO DE ÁRVORE\n");
			printf("_________________________________________________\n\n");

			if(*cont_a==0)
			{
				printf("\tNão há listas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'4');
				printf("\n________________________________________________________\n\n");

				printf("Número da lista à excluir: ");
				fflush(stdin);
				scanf("%d", &op_lista);

				if ((op_lista < 1) || (op_lista > *cont_a))
					goto seleciona_arvbb;

				cab=RetiraGeral(cab,op_lista);
				(*cont_a)--;
			}

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - IMPRESSÃO DE ÁRVOE\n");
			printf("________________________________________________________\n\n");
			if(*cont_a==0)
			{
				printf("\tNão há listas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'4');
				printf("\n________________________________________________________\n\n");
				printf("\tPressione ENTER para voltar");
			}
			getch();
		break;

		case 4:

			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I - SELEÇÃO DE ÁRVOE\n");

			printf("________________________________________________________\n\n");

			if(*cont_a==0)
			{
				printf("\tNão há listas.Pressione ENTER para voltar\n");
				getch();
			}
			else
			{
				ImprimirGeral(cab,'4');
				printf("\n________________________________________________________\n\n");


				seleciona_lista2:printf("Número da lista à selecionar: ");
				fflush(stdin);
				scanf("%d", &op_lista);


				if ((op_lista < 1) || (op_lista > * cont_a))
				{

					printf("\r");
			        for (int j = 0; j < 30; j++) {
			            printf(" "); // apaga a linha anterior
			        }
			        printf("\r");
					goto seleciona_lista2;
				}

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
