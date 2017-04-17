
typedef struct pilha Pilha;

/*Cria pilha */
Pilha* pilha_cria();

/*Verifica se a pilha esta cheia*/
int pilha_cheia();

/*Coloca +1 elemento na pilha no topo*/
void pilha_push();

/*Elimina o top da pilha*/
int pilha_pop();

/*Fala se a pilha esta vazia ou cheia*/
int pilha_vazia(Pilha *p);

/*Esvazia a pilha*/
void pilha_libera();

/*Imprime a pilha toda*/
void pilha_imprime();
