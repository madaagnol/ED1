#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include "lista.h"
#include "lista.c"

union No
{
	//Fila *no_f;
	//Pilha *no_p;
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

//void MenuPilha();
//void MenuFila();

void MenuLista(L_Geral* cab, int *cont_l);
void ImprimirGeral(L_Geral *cab,char flag);
L_Geral* CriarGeral(L_Geral *cab,char flag,int *cont_l);
L_Geral* RetiraGeral(L_Geral* l, int v);
L_Geral* SelecaoLista(L_Geral *cab,int v);

int main() {
	int menu,cont_p=0,cont_f=0,cont_l=0;
	setlocale(LC_ALL,"");
	Rep_Menu: system("cls");

	//Criando Lista Geral
	L_Geral *list=NULL;

	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");

	printf("Pilhas existentes: %d\n",cont_p);
	printf("Filas existentes: %d\n",cont_f);
	printf("Listas existentes: %d\n",cont_l);
	printf("________________________________________\n\n");

	printf("Selecione a estrutura a ser manipulada:\n");
	printf("\t1 - Pilha\n");
	printf("\t2 - Fila\n");
	printf("\t3 - Lista\n");
	printf("\t0 - Sair\n");
	printf("\nOpÁ„o: ");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
		//	MenuPilha();
		break;

		case 2:
		// 	MenuFila();
		break;

		case 3:
			MenuLista(list, &cont_l);
		break;

		case 0:
			exit(1);
		break;

		default: printf("\nOpcao invalida");
		getch();
		break;
	}
	goto Rep_Menu;
}

void MenuLista(L_Geral *cab, int *cont_l)
{
	L_Geral *no_list, *aux, *aux_percorre;
	Lista *nova_lista,*imp;
	
	int menu,resp,i, contador_percorre, op_lista;
	returnLista: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");

	printf("Listas existentes: %d\n\n\n", *cont_l);
	printf("________________________________________\n\n");

	printf("Selecione a opÁ„o a ser manipulada:\n");
	printf("\t1 - Criar Lista\n");
	printf("\t2 - Excluir Lista\n");
	printf("\t3 - Exibir todas Listas\n");
	printf("\t4 - Selecionar Lista\n");
	printf("\t0 - Voltar\n");
	printf("\nOp√ß√£o: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			goto jump;
		break;
		
		case 1:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
			cab=CriarGeral(cab,'3',&(*cont_l));
			printf("\n\nLista Criada!");
			getch();
		break;

		case 2:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
			ImprimirGeral(cab,'3');
			
			seleciona_lista:
			printf("Digite o numero da lista desejada para excluir: ");
			fflush(stdin);
			scanf("%d", &op_lista);	
			
			if ((op_lista < 1) || (op_lista > * cont_l))
				goto seleciona_lista;
			
			
			cab=RetiraGeral(cab,op_lista);
			(*cont_l)--;

		break;

		case 3:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
			ImprimirGeral(cab,'1');
			ImprimirGeral(cab,'2');
			ImprimirGeral(cab,'3');
			getch();
		break;

		case 4:
			system("cls");
			printf("TRABALHO ESTRUTURA DE DADOS I\n\n");

			printf("________________________________________\n\n");
			
			ImprimirGeral(cab,'3');
			
			printf("________________________________________\n\n");
			
			seleciona_lista2:
			printf("Digite o numero da lista ‡ selecionar: ");
			fflush(stdin);
			scanf("%d", &op_lista);	
			
			if ((op_lista < 1) || (op_lista > * cont_l))
				goto seleciona_lista2;					
			
			cab=SelecaoLista(cab,op_lista);
		break;
		
		default: printf("\nOp√ß√£o inv√°lida");
		getch();

	}
	goto returnLista;
	jump: printf("");

}

L_Geral* SelecaoLista(L_Geral *cab,int v)
{
	int menu,contador_percorre=1,resp;
	L_Geral *aux_percorre=cab;
	while (contador_percorre<v) 
	{
		if(aux_percorre->flag=='3')
		contador_percorre++;
	
		aux_percorre=aux_percorre->prox;
	} 
		
	returnmenu: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I\n");

	printf("________________________________________\n\n");
	
	printf("Selecione a opÁ„o a ser manipulada:\n");
	printf("\t1 - Inserir na Lista\n");
	printf("\t2 - Excluir  da Lista\n");
	printf("\t3 - Exibir Lista\n");
	printf("\t0 - Voltar\n");
	printf("\nOp√ß√£o: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			return cab;
		break;
		
		case 1:
					
			printf("\n\nDigite o numero a ser inserido na lista %s: ", aux_percorre->nome);
			fflush(stdin);
			scanf("%d", &resp);
			
			aux_percorre->estrutura.lista = InserirLista(aux_percorre->estrutura.lista, resp);
		break;
		
		case 2:
			
			ImprimirLista(aux_percorre->estrutura.lista);
			printf("\n\n________________________________________\n\n");
			
			printf("Digite o item que deseja excluir:\n");
			scanf("%d",&resp);
			RetiraLista(aux_percorre->estrutura.lista,resp);
			
		break;
		
		case 3:
			ImprimirLista(aux_percorre->estrutura.lista);
			getch();
		break;
		
		default:
		break;
		
	}
	goto returnmenu;
}

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
// ponteiro para elemento anterior
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
        /* n„o achou: retorna lista original*/
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
	
/*	if(flag=='1')
	{
		Pilha *nova_pilha;
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); //Aloca um nÛ da lista principal
		nova_pilha=CriarPilha(nova_pilha); //Cria uma nova lista
		no_list->estrutura.pilha=nova_pilha; //Faz a lista geral criada apontar para a cabe√ßa da pilha criada
			
		no_list->flag = '1';
		printf("Digite o nome da pilha: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab; //Faz a lista criada ser inserida na primeira posi√ß√£o
		(*cont)++;
		return no_list;
	}
	
	if(flag=='2')
	{
		Fila *nova_fila;
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); //Aloca um nÛ da lista principal
		nova_fila=CriarFila(nova_fila); //Cria uma nova lista
		no_list->estrutura.fila=nova_lista; //Faz a lista geral criada apontar para a cabe√ßa da fila criada
			
		no_list->flag = '3';
		printf("Digite o nome da fila: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab; //Faz a lista criada ser inserida na primeira posi√ß√£o
		(*cont)++;
		return no_list;
	}
	*/
	if(flag=='3')
	{
		Lista *nova_lista;
		no_list = (L_Geral *)malloc(sizeof(L_Geral)); //Aloca um nÛ da lista principal
		nova_lista=CriarLista(nova_lista); //Cria uma nova lista
		no_list->estrutura.lista=nova_lista; //Faz a lista geral criada apontar para a cabe√ßa da lista criada
			
		no_list->flag = '3';
		printf("Digite o nome da lista: ");
		fflush(stdin);
		gets(no_list->nome);

		no_list->prox=cab; //Faz a lista criada ser inserida na primeira posi√ß√£o
		(*cont)++;
		return no_list;
	}


}
