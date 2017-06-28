#include "Lista.h"

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
    Lista* novo = CriarLista(novo);
    novo->info = i; 
    novo->prox = l;
    return novo;
}

/* função imprime: imprime valores dos elementos */
void ImprimirLista(Lista* l)
{
    Lista* p;
    for (p = l; p!= NULL; p = p->prox)
        printf("%d ", p->info);
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
