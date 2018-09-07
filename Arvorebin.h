/* TAD arvore binária */

typedef struct tree Tree;
/* Cada nó armazena três informações:
   número (num),
   sub-árvore à direita (sad)
   sub-árvore à esquerda (sae).*/

struct tree
{
	int num;
	struct tree* sad;
  	struct tree* sae;
};

Tree* createTree();

int treeIsEmpty(Tree* t);

void showTree(Tree* t);

void insertTree(Tree** t, int num);

int isInTree(Tree* t, int num);