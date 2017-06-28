#include "Selecao.h"
#include "ListaGeral.c"
#include "ListaGeral.h"

L_Geral* SelecaoPilha(L_Geral *cab,int v)
{

	int menu,contador_percorre=0,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
		if(aux->flag=='1')
			contador_percorre++;
			
		if (contador_percorre == v)
			break;

		aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - PILHA %s\n",aux->nome);
	printf("________________________________________________________\n\n");

	printf("\tSelecione a opção:\n");
	printf("\t1 - Push\n");
	printf("\t2 - Pop\n");
	printf("\t3 - Exibir pilha\n");
	printf("\t0 - Voltar\n");
	printf("\n\tOpção: ");
	scanf("%d", &menu);
	printf("________________________________________________________\n\n");
				
	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			printf("\tDigite o número: ");
			fflush(stdin);
			scanf("%d", &resp);
			
			aux->estrutura.pilha=InserirPilha(aux->estrutura.pilha, resp);

		break;

		case 2:
			printf("\tPilha Atualizada: ");
			RetiraPilha(aux->estrutura.pilha);
			ImprimirPilha(aux->estrutura.pilha);
			getch();
			
		break;

		case 3:
			
			printf("\tPilha %s: ",aux->nome);
			ImprimirPilha(aux->estrutura.pilha);
			getch();
		break;

		default:
		break;

	}
	goto returnmenu;
}

L_Geral* SelecaoFila(L_Geral *cab,int v)
{

	int menu,contador_percorre=0,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
	    if(aux->flag=='2')
	        contador_percorre++;
	        
	    if (contador_percorre == v)
			break;

	    aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - FILA %s\n",aux->nome);
	printf("________________________________________________________\n\n");

	printf("\tSelecione a opção: \n");
	printf("\t1 - Inserir na fila\n");
	printf("\t2 - Excluir  da fila\n");
	printf("\t3 - Exibir fila\n");
	printf("\t0 - Voltar\n");
	printf("\n\tOpção: ");
	scanf("%d", &menu);
	printf("________________________________________________________\n\n");
	
	switch(menu)
	{
	    case 0:
	        return cab;
	    break;

	    case 1:
	        printf("\tDigite o número: ");
	        fflush(stdin);
	        scanf("%d", &resp);

	        aux->estrutura.fila = InserirFila(aux->estrutura.fila, resp);
	    break;

	    case 2:
	    	printf("\tFila Atualizada: ");
	        RetiraFila(aux->estrutura.fila);	    	
	        ImprimirFila(aux->estrutura.fila);
	        getch();

	    break;

	    case 3:
	    	printf("\tFila %s: ",aux->nome);
	        ImprimirFila(aux->estrutura.fila);
	        getch();
	    break;

	    default:
	    break;

	}
	goto returnmenu;
}


L_Geral* SelecaoLista(L_Geral *cab,int v)
{

	int menu,contador_percorre=0,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
		if(aux->flag=='3')
			contador_percorre++;
			
		if (contador_percorre == v)
			break;

		aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - LISTA %s\n",aux->nome);
	printf("________________________________________________________\n\n");

	printf("\tSelecione a opção:\n");
	printf("\t1 - Inserir na lista\n");
	printf("\t2 - Excluir  da lista\n");
	printf("\t3 - Exibir lista\n");
	printf("\t0 - Voltar\n");
	printf("\n\tOpção: ");
	scanf("%d", &menu);
	printf("________________________________________________________\n\n");
	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			printf("\tDigite o numero: ");
			fflush(stdin);
			scanf("%d", &resp);

			aux->estrutura.lista = InserirLista(aux->estrutura.lista, resp);
		break;

		case 2:
			printf("\tLista Atualizada: ");
			ImprimirLista(aux->estrutura.lista);
			printf("\tExclua o número: \n");
			scanf("%d",&resp);
			aux->estrutura.lista=RetiraLista(aux->estrutura.lista,resp);
		break;

		case 3:
		printf("\tLista %s: ",aux->nome);
			ImprimirLista(aux->estrutura.lista);
			getch();
		break;

		default:
		break;

	}
	goto returnmenu;
}


L_Geral* SelecaoArvBB(L_Geral *cab,int v)
{
	int menu,contador_percorre=0,resp;
	L_Geral *aux=cab;
	while (contador_percorre<v)
	{
		if(aux->flag=='4')
			contador_percorre++;
			
		if (contador_percorre == v)
			break;

		aux=aux->prox;
	}

	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I - ÁRVORE %s\n",aux->nome);
	printf("________________________________________________________\n\n");

	printf("\tSelecione a opção:\n");
	printf("\t1 - Inserir na árvore de busca\n");
	printf("\t2 - Excluir  da árvore de busca\n");
	printf("\t3 - Exibir árvore de busca\n");
	printf("\t0 - Voltar\n");
	printf("\n\tOpção: ");
	scanf("%d", &menu);
	printf("________________________________________________________\n\n");
	switch(menu)
	{
		case 0:
			return cab;
		break;

		case 1:
			
			printf("\tDigite o número: ");
			fflush(stdin);
			scanf("%d", &resp);

			InserirArvBB(&(aux->estrutura.arvbb), resp);
		break;

		case 2:
			ImprimirArvBB((aux->estrutura.arvbb),0,Altura(aux->estrutura.arvbb));
			printf("\tExclua o número: \n");
			scanf("%d",&resp);
			RetiraArvBB(&(aux->estrutura.arvbb),resp);
		break;

		case 3:
			printf("\n\tÁrvore de busca %s: \n",aux->nome);
			ImprimirArvBB(aux->estrutura.arvbb,0,Altura(aux->estrutura.arvbb));
			getch();
		break;

		default:
		break;

	}
	goto returnmenu;
}
