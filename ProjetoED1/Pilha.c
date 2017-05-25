#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"
#include "Pilha.h"
#define max 10

typedef struct pilha Pilha;

struct pilha
{
	Lista *topo;
};


Pilha* pilha_cria()
{
		Pilha *p = (Pilha*)malloc(sizeof(Pilha));
		p->topo = lst_cria();
		
		printf("\n\n\t\t\tPilha criada com sucesso!");
		return p;
}

void pilha_push(Pilha *p)
{
	int x;
	if(!pilha_vazia(p))
	{
		printf("\n\n\t\tInserir elemento: ");
		scanf("%d",&x);
		p->topo = lst_insere(p->topo,x);
	}
	else 
	{
		printf("\n\n\t\tPilha inexistente!");
		getch();	
	}

}

int pilha_pop(Pilha *p)
{
	
	if(!pilha_vazia(p) && p->topo!=NULL)
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

void pilha_libera(Pilha *p)
{	
	if(!pilha_vazia(p))
	{
		Pilha *aux;
		lst_libera(p->topo);
		free(p);
	}
	else
	{
		printf("\n\n\t\tPilha inexistente");
		getch();	
	}
	
}

void pilha_imprime(Pilha *p)
{
	if(!pilha_vazia(p) && p->topo!=NULL)
		lst_imprime(p->topo);	
		
	else printf("\n\n\t\t\tERRO, PILHA VAZIA");
	printf("\n\n\t\tPRESSIONE ENTER PARA CONTINUAR");
	
	getch();
}

int pilha_ver_topo(Pilha *p)
{
/*	if(!pilha_vazia(p) && p->topo!=NULL)
		printf("\n\n\t\t\tTopo da pilha : %d",p->topo->info);	
		
	else printf("\n\n\t\tERRO, PILHA VAZIA");
	
	printf("\n\n\t\tPRESSIONE ENTER PARA CONTINUAR");
	getch();*/
}

int pilha_vazia(Pilha *p)
{
	if (p==NULL) return 1;
	else return 0;
}
