#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "indiceInvertido.h"

TpNodo *insert(char *palavra, TpNodo *root){
	// se arvore estiver vazia
	if(root == NULL){
		puts("arvore vazia\n\n");
		nodoNULL = (TpNodo*) malloc(sizeof(TpNodo));
		// apontamentos do sentinela "nodoNULL"
		nodoNULL->cor = BLACK;
		nodoNULL->esq = NULL;
		nodoNULL->dir = NULL;
		nodoNULL->pai = NULL;
		puts("alocado nodoNULL\n\n");

		// alocando raiz
		root = (TpNodo*) malloc(sizeof(TpNodo));
		root->info = (char*) malloc(sizeof(strlen(palavra)));
		strcpy(root->info, palavra);
		root->dir = nodoNULL;
		root->esq = nodoNULL;
		root->pai = nodoNULL;
		root->cor = BLACK;
		puts("inserido primeira chave, RAIZ\n\n");
		return root;
	}
	return root;
}

void Desenha(TpNodo *root , int nivel){
	int x;
	if (root !=nodoNULL){
		for (x=1; x<=nivel; x++)
			printf("=");
		if(root->cor) printf("%s Red\n", root->info);
		else printf("%s Black\n", root->info);
		if (root->esq != nodoNULL) Desenha(root->esq, (nivel+1));
		if (root->dir != nodoNULL) Desenha(root->dir, (nivel+1));
	}
	else printf("Arvore Vazia\n");
}

