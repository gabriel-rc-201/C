#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"

typedef struct arv Arv;

struct arv
{
	int info;
	Arv* esq;
	Arv* dir;
};

