#ifndef _LISTA_H_
#define _LISTA_H_

typedef struct lista
{
    int info;
    struct lista* prox;
} Lista;

Lista* CriarLista(Lista *novo);

Lista* InserirLista(Lista* l, int i);

void ImprimirLista(Lista* l);

int VerListaVazia(Lista* l);

Lista* BuscaLista(Lista* l, int v);

Lista* RetiraLista(Lista* l, int v);

void LiberaLista(Lista* l);

#endif

