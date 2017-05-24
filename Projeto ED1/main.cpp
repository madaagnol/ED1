#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include "Fila.h"
#include "Pilha.h"
#include "Lista.h"

void MenuPilha();
void MenuFila();
void MenuLista();

struct lista_pilha {
	Pilha* info;
	struct lista_pilha* prox;
};

struct lista_fila {
	Fila* info;
	struct lista_fila* prox;
};

struct lista_lista {
	Lista* info;
	struct lista_lista* prox;
};

struct lista_pilha *ListaPilha = NULL;
struct lista_fila *ListaFila = NULL;
struct lista_lista *ListaLista = NULL;

int main(int argc, char *argv[]) {
	int menu,cont_p=0,cont_f=0,cont_l=0;
	setlocale(LC_ALL,"");
	Rep_Menu: system("cls");
	
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
	printf("\nOPÇÃO: ");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			MenuPilha();
		break;
		 
		case 2:
		 	MenuFila();
		break;
		
		case 3:
			MenuLista();
		break;
		
		case 0:
			exit(1);
		break;
		
		default: printf("\nOpção inválida");
		getch();
		goto Rep_Menu;
	}
}

void MenuPilha()
{
	int menu,cont_p=0;
	struct lista_pilha *aux, *nova_pilha;
	Pilha *p;

	
	Rep_Menu: system("cls");
	
	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
	
	printf("Pilhas existentes: %d\n\n\n",cont_p);
	printf("________________________________________\n\n");
	
	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Criar\n");
	printf("\t2 - Excluir\n");
	printf("\t3 - Selecionar\n");
	printf("\t0 - Voltar\n");
	printf("\nOPÇÃO: ");
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
		
		default: printf("\nOpção inválida");
		getch();
		goto Rep_Menu;
	}
}
void MenuLista()
{
	int menu,cont_l=0;
	
	Rep_Menu: system("cls");
	
	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
	
	printf("Listas existentes: %d\n\n\n",cont_l);
	printf("________________________________________\n\n");
	
	printf("Selecione a opção a ser manipulada:\n");
	printf("\t1 - Criar\n");
	printf("\t2 - Excluir\n");
	printf("\t3 - Selecionar\n");
	printf("\t0 - Voltar\n");
	printf("\nOPÇÃO: ");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			//CriarLista();
		break;
		 
		case 2:
		 	//ExcluirPilha();
		break;
		
		case 3:
			//SelecionarPilha();
		break;
		
		case 0:
		break;
		
		default: printf("\nOpção inválida");
		getch();
		goto Rep_Menu;
	}
}
void MenuFila()
{
		int menu,cont_p=0;
	
	Rep_Menu: system("cls");
	
	printf("TRABALHO ESTRUTURA DE DADOS I\n\n");
	
	printf("Pilhas existentes: %d\n\n\n",cont_p);
	printf("________________________________________\n\n");
	
	printf("Selecione a estrutura a ser manipulada:\n");
	printf("\t1 - Criar\n");
	printf("\t2 - Excluir\n");
	printf("\t3 - Selecionar\n");
	printf("\t0 - Voltar\n");
	printf("\nOPÇÃO: ");
	scanf("%d", &menu);
	switch(menu)
	{
		case 1:
			//CriarPilha();
		break;
		 
		case 2:
		 	//ExcluirPilha();
		break;
		
		case 3:
			//SelecionarPilha();
		break;
		
		case 0:
		break;
		
		default: printf("\nOpção inválida");
		getch();
		goto Rep_Menu;
	}
}
