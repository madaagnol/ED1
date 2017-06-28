#include "ListaGeral.h"
#include "Pilha.c"
#include "Pilha.h"

#include "Fila.c"
#include "Fila.h"

#include "Lista.c"
#include "Lista.h"

#include "ArvBinBusca.c"
#include "ArvBinBusca.h"

union No
{
	Pilha *pilha;
	Fila *fila;
	Lista *lista;
	ABBusca *arvbb;
};
typedef union No tipo;

struct Lista_Geral{
	tipo estrutura;
	char flag;
	char nome[20];
	struct Lista_Geral *prox;
};
typedef struct Lista_Geral L_Geral;

void ImprimirGeral(L_Geral *cab,char flag)
{
	L_Geral *aux_percorre=cab;
	int contador_percorre = 0;

	while (aux_percorre!= NULL)
	{
		if (flag == aux_percorre->flag)
		{
			contador_percorre++;
			printf("\t%d) - %s\n", contador_percorre, aux_percorre->nome);
		}
		aux_percorre = aux_percorre->prox;
	}
}

L_Geral* RetiraGeral(L_Geral* l,int v,char flag)
{
    L_Geral* ant = NULL;
    L_Geral* p = l;
    int cont=0;
    
    while (p != NULL && cont!=v)
    {
    	if(p->flag == flag)
			cont++;
			
		if (cont == v)
			break;
			
        ant = p;
        p = p->prox;
    }

    if(cont<v)
    	return l;
    	
	if(flag == '1') LiberaLista(p->estrutura.pilha->topo);

	else if(flag == '2') LiberaLista(p->estrutura.fila->ini);

	else if(flag == '3') LiberaLista(p->estrutura.lista);

    else DestroiABBusca(&p->estrutura.arvbb);
    

    if (ant == NULL)
        l = p->prox;
    
    else  
        ant->prox = p->prox;
    
    free(p);

    return l;
}

Lista_Geral* CriarGeral(L_Geral *cab,char flag,int *cont)
{
	L_Geral *no_list;

	if(flag=='1')
	{
		Pilha *nova_pilha=CriarPilha(nova_pilha);
		
		no_list = (L_Geral *)malloc(sizeof(L_Geral));
		
		no_list->estrutura.pilha=nova_pilha; 

		no_list->flag = '1';
		
		printf("\tNome da pilha: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab; 
		(*cont)++;
		return no_list;
	}

	if(flag=='2')
	{
		Fila *nova_fila;
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); 
		nova_fila=CriarFila(nova_fila);
		no_list->estrutura.fila=nova_fila; 
		no_list->flag = '2';
		printf("\tNome da fila: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab; 
		(*cont)++;
		return no_list;
	}

	if(flag=='3')
	{
		Lista *nova_lista;
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); 
		no_list->estrutura.lista=nova_lista; 

		no_list->flag = '3';
		printf("\tNome da lista: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab;
		(*cont)++;
		return no_list;
	}


		if(flag=='4')
	{
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); 
		no_list->estrutura.arvbb = NULL; 

		no_list->flag = '4';
		printf("\tNome da arvore: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab;
		(*cont)++;
		return no_list;
	}

}
