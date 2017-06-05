#include "Fila.h"
#include "Lista.h"

typedef struct fila Fila;

struct fila
{
	Lista* ini;
	Lista* fim;
};

Fila* CriarFila(Fila *e)
{
		Fila *f= (Fila* )malloc(sizeof(Fila));
		f->ini=NULL;
		f->ini=CriarLista(f->ini);
		f->ini=NULL;
		f->fim=f->ini;
		return f;	

}

Fila * InserirFila(Fila *f,int x)
{

	Lista *l;
	l=CriarLista(l);
	l->info=x;
	
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

int RetiraFila(Fila *f)
{
	if(!VerFilaVazia(f) && (f->ini!=NULL))
	{
		Lista *aux=f->ini;
	//	f->ini=f->ini->prox;
		free(aux);
	}
	else
	{
		printf("\n\n\t\tLista Vazia");
		getch();
	}


}

int VerFilaVazia(Fila *f)
{
	if(f==NULL)return 1;
	else return 0;

}

void LiberaFila(Fila *f)
{
	if(!VerFilaVazia(f))
	{
		while(f->ini!=NULL)
			RetiraFila(f);
	}
	else
	{
		printf("\n\n\t\tLista Vazia");
		getch();
	}
}

void ImprimirFila(Fila *f)
{
	ImprimirLista(f->ini);
}
