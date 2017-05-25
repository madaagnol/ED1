#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct lista
{
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

/* função de criação: retorna uma lista vazia */
Lista* CriarLista(Lista *novo)
{
    novo = (Lista *)malloc(sizeof(Lista));
    novo->prox=NULL;
    return novo;
}

/* inserção no início: retorna a lista atualizada */
Lista* InserirLista(Lista* l, int i)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

/* função imprime: imprime valores dos elementos */
void ImprimirLista(Lista* l)
{
    Lista* p;
    for (p = l; p->prox!= NULL; p = p->prox)
        printf("\nNumero = %d", p->info);
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int VerListaVazia(Lista* l)
{
    return (l == NULL);
}

/* função busca: busca um elemento na lista */
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

/* função retira: retira elemento da lista */
Lista* RetiraLista(Lista* l, int v)
{
// ponteiro para elemento anterior
    Lista* ant = NULL;
    Lista* p = l;
    /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->info != v)
    {
        ant = p;
        p = p->prox;
    }
    /* verifica se achou elemento */
    if (p == NULL)
        /* não achou: retorna lista original*/
        return l;
        /* retira elemento */
        if (ant == NULL)
        {
            /* retira elemento do inicio */
            l = p->prox;
        }
        else   /* retira elemento do meio da lista */
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
