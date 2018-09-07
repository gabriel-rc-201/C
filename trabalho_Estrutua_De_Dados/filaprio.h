/* Tad Fila Prioridades */

typedef struct FilaPrioridade FilaP;

struct FilaPrioridade
{
	int t_heap;
	int v[10];
};

FilaP* filap_cria(); //cria uma fila de prioridade vazia;

int heap_maximum(FilaP* f); //devolve o elemento de maior prioridade na fila;

int heap_extract_max(FilaP* f);  //devolve o elemento de maior prioridade e o retira da fila;

void heap_increase_key(FilaP* f, int ind, int chave); //modifica a prioridade de determinado elemento no índice ind na
													  //fila (apenas se chave for maior);

void max_heap_insert(FilaP* f, int chave); ////insere um novo elemento na fila com prioridade chave.