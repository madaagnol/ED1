typedef struct lista Lista;

Lista* CriarLista(Lista *novo);

Lista* InserirLista(Lista* l, int i);

void ImprimirLista(Lista* l);

int VerListaVazia(Lista* l);

Lista* BuscaLista(Lista* l, int v);

Lista* RetiraLista(Lista* l, int v);

void LiberaLista(Lista* l);
