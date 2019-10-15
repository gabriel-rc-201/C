#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct lista Lista;
typedef struct fila Fila;

struct lista
{
	int info;
	Lista* prox;
};

struct fila
{
	Lista* ini;
	Lista* fim;
};

int fila_vazia(Fila* f)
{
	return (f->ini == NULL);
}

Fila* fila_cria(void)
{
	Fila* f = (Fila*) malloc(sizeof(Fila));
	if (f == NULL)
	{
		printf("memoria insuficiente Zé");
		exit(1);
	}

	f->ini = NULL;
	f->fim = NULL;
	return f;
}

void fila_insere(Fila* f, int i)
{
	Lista* l = (Lista*) malloc(sizeof(Lista));
	if(l==NULL)
	{
		printf("Memoria insuficiente coité!!!\n");
		exit(1);
	}

	l->info = i;
	l->prox = NULL;

	if(!fila_vazia(f))
		f->fim->prox = l;
	
	else
		f->ini = l;

	f->fim = l;
}

int fila_remove(Fila* f)// na fila só sai o primeiro
{
	int valor = 0;
	
	if(fila_vazia(f))
	{
		printf("Fila vaizia assim num dah né mah =/\n");
		exit(1);
	}

	else
	{

		Lista* pointer;

		valor = f->ini->info;
		pointer = f->ini;
		f->ini = f->ini->prox;

		free(pointer);

		if(fila_vazia(f))
			f->fim = NULL;
	}
	
	return valor;
}

void fila_imprime(Fila* f)
{
	if(fila_vazia(f))
	{
		printf("Fila vaizia assim num dah né Zé =/\n");
		exit(1);
	}
	
	else
	{
		Lista* pointer;
		pointer = f->ini;

		while(pointer != NULL)
		{
			printf("info = %d\n", pointer->info);
			pointer = pointer->prox;
		}
	}
}

void fila_libera(Fila* f)
{
	Lista* pointer = f->ini;
	
	do
	{
		f->ini = f->ini->prox;
		free(pointer);
		pointer = f->ini;	
	}while(pointer != NULL);

	free(f);
}