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

NODO *insert(char *palavra, NODO *root){
	if(!root){
		root = (NODO*) malloc(sizeof(NODO));
		root-> pai = NIL;
		if(strcpy(root->info, palavra));
		root->cor = BLACK;
	}




}

NODO *busca(char *palavra, NODO *root){
	if(!root) return NULL;
	
	NODO *atual = root;
	int aux; // para pegar o retorna da funcao STRCMP
	aux = strcmp(palavra, atual->info);
	if(aux < 0) // palavra menor que atual
		return busca(palavra, atual->esq); 
	else if(aux > 0) // palavra maior que atual
		return busca(palavra, atual->dir);
	else return atual;
	
}

void Desenha(NODO *t , int nivel){
int x;
	if (t !=NodoNULL){
		for (x=1; x<=nivel; x++)
			printf("=");
		if(t->red) printf("%d Red\n", t->key);
		else printf("%d Black\n", t->key);
		if (t->esq != NodoNULL) Desenha(t->esq, (nivel+1));
		if (t->dir != NodoNULL) Desenha(t->dir, (nivel+1));
	}
	else printf("Arvore Vazia\n");
}



NODO *criaArvoreVazia(){
	return NULL;
}




