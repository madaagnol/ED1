#include "Lista.h"
#include "Pilha.h"
#define max 10

typedef struct pilha Pilha;

struct pilha
{
	Lista *topo;
};


Pilha* CriarPilha(Pilha *p)
{
		p = (Pilha*)malloc(sizeof(Pilha));
		p->topo = NULL;

		printf("\n\n\t\t\tPilha criada com sucesso!");
		return p;
}

void InserirPilha(Pilha *p)
{
	int x;
	if(!VerPilhaVazia(p))
	{
		printf("\n\n\t\tInserir elemento: ");
		scanf("%d",&x);
		p->topo = InserirLista(p->topo,x);
	}
	else
	{
		printf("\n\n\t\tPilha inexistente!");
		getch();
	}

}

int RetiraPilha(Pilha *p)
{

	if(!VerPilhaVazia(p) && p->topo!=NULL)
	{
		Lista *aux=p->topo;
	//	p->topo=p->topo->prox;
		free(aux);
	}
	else
	{
		printf("\n\n\t\tPilha vazia ou inexistente");
		getch();
	}

}

void LiberaPilha(Pilha *p)
{
	if(!VerPilhaVazia(p))
	{
		Pilha *aux;
		LiberaLista(p->topo);
		free(p);
	}
	else
	{
		printf("\n\n\t\tPilha inexistente");
		getch();
	}

}

void ImprimirPilha(Pilha *p)
{
	if(!VerPilhaVazia(p) && p->topo!=NULL)
		ImprimirLista(p->topo);

	else printf("\n\n\t\t\tERRO, PILHA VAZIA");
	printf("\n\n\t\tPRESSIONE ENTER PARA CONTINUAR");

	getch();
}

int pilha_ver_topo(Pilha *p)
{
/*	if(!VerPilhaVazia(p) && p->topo!=NULL)
		printf("\n\n\t\t\tTopo da pilha : %d",p->topo->info);

	else printf("\n\n\t\tERRO, PILHA VAZIA");

	printf("\n\n\t\tPRESSIONE ENTER PARA CONTINUAR");
	getch();*/
}

int VerPilhaVazia(Pilha *p)
{
	if (p==NULL) return 1;
	else return 0;
}
