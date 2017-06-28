#include "Lista.h"
#include "Pilha.h"
#define max 10

Pilha* CriarPilha(Pilha *p)
{
	p = (Pilha*)malloc(sizeof(Pilha));
	p->topo=NULL;
	return p;
}

Pilha* InserirPilha(Pilha *p,int x)
{
	p->topo = InserirLista(p->topo,x);
	return p;
}

int RetiraPilha(Pilha *p)
{
	Lista *aux=p->topo;
	
	if (p->topo != NULL) 
	{
		p->topo=p->topo->prox;
		free(aux);
	} 
	else 
		printf ("\n\n\t\tErro. Pilha vazia.");

}

void LiberaPilha(Pilha *p)
{
	if(p!=NULL)
	{
		if(!VerPilhaVazia(p))
		{
			Pilha *aux;
			LiberaLista(p->topo);
			free(p);
		}

	}		
	else
	{
		printf("\n\n\t\tPilha inexistente");
		getch();
	}
		

}

void ImprimirPilha(Pilha *p)
{
	ImprimirLista(p->topo);
}

int VerPilhaVazia(Pilha *p)
{
	if (p==NULL) return 1;
	else return 0;
}
