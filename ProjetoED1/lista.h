#include <stdlib.h>
#include <stdio.h>

typedef struct lista Lista;

/* funcao de criao: retorna uma lista vazia */
Lista* lst_cria();

/* inser��o no in�cio: retorna a lista atualizada */
Lista* lst_insere(Lista* l, int i);

/* fun��o imprime: imprime valores dos elementos */
void lst_imprime(Lista* l);

/* fun��o vazia: retorna 1 se vazia ou 0 se nao vazia */
int lst_vazia(Lista* l);

/* fun��o busca: busca um elemento na lista */
Lista* busca(Lista* l, int v);

/* fun��o retira: retira elemento da lista */
Lista* lst_retira(Lista* l, int v);

/*Libera a lista completa*/
void lst_libera(Lista* l);
