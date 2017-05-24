#include "Fila.h"
#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct lista Lista;

struct fila 
{
	Lista* ini;
	Lista* fim;
};

Fila* fila_cria(Fila *e)
{
	if(fila_vazia(e))
	{
		Fila *f= (Fila* )malloc(sizeof(Fila));
		f->ini=NULL;
		f->fim=NULL;
		return f;
	}
	else
	{
		printf("\n\n\t\tFila já criada!");
		getch();
		return e;
	}
	
}

void fila_insere(Fila *f)
{
	if(!fila_vazia(f))
	{
		Lista *l = (Lista *)malloc(sizeof(Lista));
		int x;
		
		l->prox = NULL;
	
		printf("\n\n\t\tInserir elemento: ");
		scanf("%d",&l->info);
		
		if(f->ini==NULL)
		{
			f->ini=l;
			f->fim=l;
		}
		else
		{
			f->fim->prox=l;
			f->fim=l;
		}
	}
	else 
	{
		printf("\n\n\t\tLista Vazia");
		getch();	
	}
}

int fila_retira(Fila *f)
{
	if(!fila_vazia(f) && (f->ini!=NULL))
	{
		Lista *aux=f->ini;
		f->ini=f->ini->prox;
		free(aux);
	}
	else 
	{
		printf("\n\n\t\tLista Vazia");
		getch();	
	}
	
		
}

int fila_vazia(Fila *f)
{
	if(f==NULL)return 1;
	else return 0;
	
}

void fila_libera(Fila *f)
{
	if(!fila_vazia(f))
	{
		while(f->ini!=NULL)
			fila_retira(f);
	}
	else 
	{
		printf("\n\n\t\tLista Vazia");
		getch();	
	}
}	

void fila_imprime(Fila *f)
{
	if(!fila_vazia(f) && (f->ini!=NULL))
	{
		Lista *aux; 
		
		aux = f->ini;
		
		printf("\n\n\t\tFila: ");
		while (aux != NULL) 
		{
			printf("%d ", aux->info);
			aux = aux->prox;
		}	
		getch();
	}
	else 
	{
		printf("\n\n\t\tLista Vazia");
		getch();	
	}
	
}
