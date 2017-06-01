#include "listageral.h"

union No
{
	Fila *fila;
	Pilha *pilha;
	Lista *lista;
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
					printf("%d) - %s\n", contador_percorre, aux_percorre->nome);
				}

				aux_percorre = aux_percorre->prox;
			}
}

L_Geral* RetiraGeral(L_Geral* l, int v)
{
    L_Geral* ant = NULL;
    L_Geral* p = l;
    int cont=1;


    /* ponteiro para percorrer a lista*/
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && cont!=v)
    {
    	if(p->flag=='3')
			cont++;
        ant = p;
        p = p->prox;
    }

	/* verifica se achou elemento */
    LiberaLista(p->estrutura.lista);
    if (p == NULL)
        /* n�o achou: retorna lista original*/
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

Lista_Geral* CriarGeral(L_Geral *cab,char flag,int *cont)
{
	L_Geral *no_list;

		if(flag=='1')
	{
		Pilha *nova_pilha;
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); //Aloca um n� da lista principal
		nova_pilha=CriarPilha(nova_pilha); //Cria uma nova lista
		no_list->estrutura.pilha=nova_pilha; //Faz a lista geral criada apontar para a cabeça da pilha criada

		no_list->flag = '1';
		printf("Digite o nome da pilha: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab; //Faz a lista criada ser inserida na primeira posição
		(*cont)++;
		return no_list;
	}
/*
	if(flag=='2')
	{
		Fila *nova_fila;
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); //Aloca um n� da lista principal
		nova_fila=CriarFila(nova_fila); //Cria uma nova lista
		no_list->estrutura.fila=nova_lista; //Faz a lista geral criada apontar para a cabeça da fila criada

		no_list->flag = '3';
		printf("Digite o nome da fila: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab; //Faz a lista criada ser inserida na primeira posição
		(*cont)++;
		return no_list;
	}
	*/
	if(flag=='3')
	{
		Lista *nova_lista;
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); //Aloca um n� da lista principal
		nova_lista=CriarLista(nova_lista); //Cria uma nova lista
		no_list->estrutura.lista=nova_lista; //Faz a lista geral criada apontar para a cabeça da lista criada

		no_list->flag = '3';
		printf("Digite o nome da lista: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab;
		cab=no_list; //Faz a lista criada ser inserida na primeira posição
		(*cont)++;
		return cab;
	}


}
