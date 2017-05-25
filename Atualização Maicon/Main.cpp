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
	printf("\nOp��o: ");
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

/*void MenuPilha()
{
	int menu,cont_p=0;
	struct lista_pilha *aux, *nova_pilha;
	Pilha *p;


	Rep_Menu: system("cls");

	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");

	printf("Pilhas existentes: %d\n\n\n",cont_p);
	printf("________________________________________\n\n");

	printf("Selecione a opï¿½ï¿½o a ser manipulada:\n");
	printf("\t1 - Criar\n");
	printf("\t2 - Excluir\n");
	printf("\t3 - Selecionar\n");
	printf("\t0 - Voltar\n");
	printf("\nOPï¿½ï¿½O: ");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			nova_pilha = (struct lista_pilha *) malloc(sizeof(struct lista_pilha));

			p = pilha_cria();
			nova_pilha->info = p;
   			nova_pilha->prox = NULL;
   			if (ListaPilha == NULL)
   				ListaPilha = nova_pilha;
   			else {
   				aux = ListaPilha;
   				while (aux->prox != NULL) {
   					aux = aux->prox;
				}
				aux->prox = nova_pilha;
			}
		break;

		case 2:
		 	//ExcluirPilha();
		break;

		case 3:
			//SelecionarPilha();
		break;

		case 0:
		break;

		default: printf("\nOpï¿½ï¿½o invï¿½lida");
		getch();
		goto Rep_Menu;
	}
}
*/
void MenuLista(L_Geral *cab, int *cont_l)
{
	L_Geral *no_list, *aux, *aux_percorre;
	Lista *nova_lista,*imp;
	
	int menu,resp,i, contador_percorre, op_lista;
	returnLista: system("cls");
	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");

	printf("Listas existentes: %d\n\n\n", *cont_l);
	printf("________________________________________\n\n");

	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Criar\n");
	printf("\t2 - Inserir\n");
	printf("\t3 - Excluir Elemento\n");
	printf("\t4 - Busca\n");
	printf("\t5 - Excluir Lista\n");
	printf("\t0 - Voltar\n");
	printf("\nOpção: ");
	scanf("%d", &menu);

	switch(menu)
	{
		case 0:
			goto jump;
		break;
		
		case 1:

			no_list = (L_Geral *)malloc(sizeof(L_Geral)); //Aloca um nó da lista principal
			nova_lista=CriarLista(nova_lista); //Cria uma nova lista
			no_list->estrutura.lista=nova_lista; //Faz a lista geral criada apontar para a cabeça da lista criada
			
			no_list->flag = '3';
			printf("Digite o nome da lista: ");
			fflush(stdin);
			gets(no_list->nome);

			no_list->prox=cab; //Faz a lista criada ser inserida na primeira posição
			cab=no_list;
			(*cont_l)++;

		break;

		case 2:
			system("cls");
			contador_percorre = 0;
			aux_percorre = cab;
			while (aux_percorre!= NULL)
			{
				if (aux_percorre->flag == '3')
				{
					contador_percorre++;
					printf("%d) - %s\n", contador_percorre, aux_percorre->nome);
				}
				aux_percorre = aux_percorre->prox;
			}
			printf("\n\n");
			
			seleciona_lista:
			printf("Digite o numero da lista desejada: ");
			fflush(stdin);
			scanf("%d", &op_lista);
			
			if ((op_lista < 1) || (op_lista > contador_percorre))
				goto seleciona_lista;

			contador_percorre = 0;
			aux_percorre = cab;
		
			while (contador_percorre < op_lista) 
			{
				if(aux_percorre->flag=='3')
					contador_percorre++;
				else aux_percorre=aux_percorre->prox;
			} 
			
			printf("\n\nDigite o numero a ser inserido na lista %s: ", aux_percorre->nome);
			fflush(stdin);
			scanf("%d", &resp);

			aux_percorre->estrutura.lista = InserirLista(aux_percorre->estrutura.lista, resp);

		break;
		/*
		case 3:{
//			printf("\nNúmero de listas: %d",cont_l);
//			do{
//				printf("\nDigite em qual lista deseja excluir conteudo: ");
//				scanf("%d",&resp);
//			}while((resp > *cont_l)|| (resp < 1));
//			aux = lLista;//encotnra lista na struct listalista
//			for(i=1;i<=cont_l;i++){
//				if( resp == i){
//					break;
//				}else{
//					aux = aux->prox;
//				}
//			}
//			printf("\nDigite o numero que quer retirar da lista %d: ",resp);
//			scanf("%d",&resp);
//			aux->info = lst_retira(aux->info,resp);
//			printf("\nDeseja fazer mais operações na lista?: ");
//			scanf("%d",&resp);
//			if(resp == 1)
//				goto returnLista;
//			break;
		}
		case 4:{
//			Lista* p=NULL;
//				printf("\nNúmero de listas: %d",cont_l);
//			do{
//				printf("\nDigite em qual lista deseja buscar conteudo: ");
//				scanf("%d",&resp);
//			}while(resp>cont_l || resp <1);
//			aux = lLista;//encotnra lista na struct listalista
//			for(i=1;i<=cont_l;i++){
//				if( resp == i){
//					break;
//				}else{
//					aux = aux->prox;
//				}
//			}
//			printf("\nDigite o numero que quer buscar na lista %d: ",resp);
//			scanf("%d",&resp);
//			p = busca(aux->info,resp);
//			if(p == NULL){
//				printf("\nItem não encontrado!");
//				getch();
//			}
//			else{
//				printf("Item encontrado, %d",p->info);
//				getch();
//			}
//			printf("\nDeseja fazer mais operações na lista?: ");
//			scanf("%d",&resp);
//			if(resp == 1)
//				goto returnLista;
//			break;
		}
		case 5:{
//			printf("\nNï¿½mero de listas: %d",cont_l);
//			do{
//				printf("\nDigite qual lista deseja excluir: ");
//				scanf("%d",&resp);
//			}while(resp>cont_l || resp <1);
//			aux = lLista;//encontra lista na struct listalista
//			for(i=1;i<=cont_l;i++){
//				if( resp == i){
//					break;
//				}else{
//					aux = aux->prox;
//				}
//			}
//			lst_libera(aux->info);
//			cont_l-= cont_l;
//			printf("\nLista excluida");
//			printf("\nDeseja fazer mais operações na lista?: ");
//			scanf("%d",&resp);
//			if(resp == 1)
//				goto returnLista;
//			break;
		}

		*/
		case 3:
			printf("%s",cab->nome);
			imp=cab->estrutura.lista;
			ImprimirLista(imp);
			getch();
		break;
		
		default: printf("\nOpção inválida");
		getch();

	}
	goto returnLista;
	jump: printf("");

}
