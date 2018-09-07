#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

typedef struct pilha Pilha;
typedef struct lista Lista;

struct lista
{
	int info;
	Lista* prox;
};

struct pilha
{
	Lista* prim;
};

Pilha* pilha_cria(void)
{
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	
	if(p == NULL)
	{
		printf("sem memória Zé malz awe \nvlw\nflw\n");
		exit(1);
	}

	p->prim = NULL;
	return p;
}

int pilha_vazia(Pilha* p)
{
	return (p->prim == NULL);
}

void pilha_push(Pilha* p, int i)//adiciona um elemento no topo da pilha
{
	Lista* l = (Lista*) malloc(sizeof(Lista));
	if(l == NULL)
	{
		printf("sem memória Zé malz awe \nvlw\nflw\n");
		exit(1);
	}

	l->info = i;
	l->prox = p->prim;
	p->prim = l;
}

int pilha_pop(Pilha* p)//remove um elemento do topo da lista
{
	Lista* l;
	int info;

	if(pilha_vazia(p))
	{
		printf("Pilha vazia chapa!!!\nFLW\n");
		exit(1);
	}

	l = p->prim;
	
	info = l->info;
	p->prim = l->prox;
	
	free(l);

	return info;
}

void pilha_imprime(Pilha* p)
{
	Lista* ponteiro;

	ponteiro = p->prim;
	
	if(pilha_vazia(p))
	{
		printf("Pilha vazia chapa!!!\nFLW\n");
		exit(1);	
	}

	while(ponteiro != NULL)
	{
		printf("info: %d\n", ponteiro->info);
		ponteiro = ponteiro->prox;
	}
}

void pilha_libera(Pilha* p)
{
	Lista* ponteiro;

	ponteiro = p->prim;

	while(ponteiro != NULL)
	{
		p->prim = ponteiro->prox;
		free(ponteiro);
		ponteiro = p->prim;
	}

	free(p);
}