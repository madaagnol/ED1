#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

struct lista
{
    int info;
    struct lista* prox;
};

Lista* lst_cria(void)
{
	
    return NULL;
}


Lista* lst_insere(Lista* l, int i)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

void lst_imprime(Lista* l)
{
    Lista* p;
    printf("\n\n\t\tLista: ");
    for (p = l; p != NULL; p = p->prox)
        printf(" %d ", p->info);
}


int lst_vazia(Lista* l)
{
    return (l == NULL);
}

Lista* busca(Lista* l, int v)
{
    Lista* p;
    for (p=l; p!=NULL; p = p->prox)
    {
        if (p->info == v)
            return p;
    }

    return NULL;
}

Lista* lst_retira(Lista* l, int v)
{

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

void lst_libera(Lista* l)
{
    Lista* p = l;
    while (p != NULL)
    {
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}

