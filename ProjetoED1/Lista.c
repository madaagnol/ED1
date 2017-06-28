#include "Lista.h"

Lista* CriarLista(Lista *novo)
{
    novo = (Lista *)malloc(sizeof(Lista));
    novo->prox=NULL;
    return novo;
}

Lista* InserirLista(Lista* l, int i)
{
    Lista* novo = CriarLista(novo);
    novo->info = i; 
    novo->prox = l;
    return novo;
}

void ImprimirLista(Lista* l)
{
    Lista* p;
    for (p = l; p!= NULL; p = p->prox)
        printf("%d ", p->info);
}

int VerListaVazia(Lista* l)
{
    return (l == NULL);
}

Lista* BuscaLista(Lista* l, int v)
{
    Lista* p;
    for (p=l; p!=NULL; p = p->prox)
    {
        if (p->info == v)
            return p;
    }
    /* não achou o elemento */
    return NULL;
}

Lista* RetiraLista(Lista* l, int v)
{

    Lista* ant = NULL;
    Lista* p = l;

    while (p != NULL && p->info != v)
    {
        ant = p;
        p = p->prox;
    }

    if (p == NULL)
        return l;

    if (ant == NULL)
    {
		l = p->prox;
    }
    else
    {
        ant->prox = p->prox;
    }
    
    free(p);
    return l;
}

void LiberaLista(Lista* l)
{
    Lista* p = l;
    while (p != NULL)
    {
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}
