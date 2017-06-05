
typedef struct pilha Pilha;

#define max 10

/*Cria pilha */
Pilha* CriarPilha();

/*Coloca +1 elemento na pilha no topo*/
Pilha*  InserirPilha();

/*Elimina o top da pilha*/
int RetiraPilha(Pilha *p);

/*Fala se a pilha esta vazia ou cheia*/
int VerPilhaVazia(Pilha *p);

/*Esvazia a pilha*/
void LiberaPilha();

/*Imprime a pilha toda*/
void ImprimirPilha();
