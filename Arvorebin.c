#include <stdio.h>
#include <stdlib.h>
#include "Arvorebin.h"

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

/* Função que cria uma árvore */
Tree* createTree()
{
  	return NULL;
}

/* Função que verifica se uma árvore é vazia */
int treeIsEmpty(Tree* t)
{
  	return t == NULL;
}

/* Função que mostra a informação da árvore */
void showTree(Tree* t)
{
  
  	printf("<"); /* questão de organização */
  	
  	if(!treeIsEmpty(t))
  	{
    /* Mostra os elementos em pré-ordem */
    	printf("%d ", t->num); 
    	showTree(t->sae); 
    	showTree(t->sad); 
  	}

  	printf(">"); /* questão de organização */
}

/* Função que insere um dado na árvore */
void insertTree(Tree** t, int num)
{
	if(*t == NULL)
	{
		*t = (Tree*)malloc(sizeof(Tree));
		
		(*t)->sae = NULL;
		(*t)->sad = NULL;
		(*t)->num = num;
	} 

	else 
	{
		if(num < (*t)->num) /* Se o número for menor então vai pra esquerda */
	    {
	    	/* Percorre pela subárvore à esquerda */
	      	insertTree(&(*t)->sae, num);
	    }
	    
	    if(num > (*t)->num) /* Se o número for maior então vai pra direita */
	    {
	      	/* Percorre pela subárvore à direita */
	      	insertTree(&(*t)->sad, num);
	    }
	}
}


/* Função que verifica se um elemento pertence ou não à árvore */
int isInTree(Tree* t, int num)
{
  
  	if(treeIsEmpty(t))
    	return 0;
  
  	/* || interrompe a busca quando o elemento for encontrado */
  	return t->num==num || isInTree(t->sae, num) || isInTree(t->sad, num);
}