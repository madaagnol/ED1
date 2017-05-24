typedef struct lista Lista;

/* função de criação: retorna uma lista vazia */
Lista* lst_cria(void);

/* inserção no início: retorna a lista atualizada */
Lista* lst_insere(Lista* l, int i);

/* função imprime: imprime valores dos elementos */
void lst_imprime(Lista* l);

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int lst_vazia(Lista* l);

/* função busca: busca um elemento na lista */
Lista* busca(Lista* l, int v);

/* função retira: retira elemento da lista */
Lista* lst_retira(Lista* l, int v);

/*Libera a lista completa*/
void lst_libera(Lista* l);

