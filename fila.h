typedef struct item{

	struct item *proximo;
	int chave;

} Item;

typedef struct fila{

	Item *primeiro;
	Item *ultimo;
	int tamanho;

} Fila;

Fila* criaFilaVazia();
Item* criaItem(int);
int filaVazia(Fila*);
void enfilera(Item*, Fila*);
void imprimeFila(Fila*);
void desenfilera(Fila*);
void deletaFila(Fila*);
