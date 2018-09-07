
typedef struct arv Arv;

Arv* arv_cria_vazia(void);

Arv* arv_cria_no(int info, 	Arv* sae, Arv* sad);

int arv_vazia(Arv *a);

void arv_imprime(Arv *a);

int arv_pertence(Arv *a, int info);

void arv_libera(Arv *a);