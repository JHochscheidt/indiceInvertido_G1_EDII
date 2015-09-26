#include "indiceInvertido.h"
#include <stdio.h>
#include <stdlib.h>

NODO *criaNodoNull(){
	NODO *NIL = (NODO*) malloc(sizeof(NODO));
	NIL->pai = NULL;
	NIL->esq = NULL;
	NIL->dir = NULL;
	NIL->cor = BLACK;
	return NIL;
}

LISTA *criaListaVazia(){
	LISTA *lista = (LISTA*) malloc(sizeof(LISTA));
	lista->ant = NULL;
	lista->prox = NULL;
	return lista;
}


