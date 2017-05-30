typedef struct fila Fila;

/*Cria a fila*/
Fila* fila_cria();

/*Insere na fila*/
void fila_insere(Fila *f);

/*Retira da fila*/
int fila_retira(Fila *f);

/*Verifica se fica esta vazia*/
int fila_vazia(Fila *f);

/*Libera a fila*/
void fila_libera(Fila *f);

/*Imprime a fila*/
void fila_imprime(Fila *f);

/*Verifica se fila esta cheia*/
int fila_cheia(Fila *f);
