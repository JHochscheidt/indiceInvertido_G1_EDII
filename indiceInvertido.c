#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "indiceInvertido.h"

// sentinela nodoNULL
static TpNodo *nodoNULL = NULL;

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
	// arvore nao vazia
	TpNodo *atual = root;
	TpNodo *pai = atual->pai;
	//TpNodo *avo = pai->pai;
	int cmp ; // para pegar o retorno da funcao strcmp
	while(atual != nodoNULL){
	//	avo = pai;
		pai = atual;
		cmp = strcmp(palavra, atual->info);
		if(cmp < 0) // palavra é menor que o atual
			atual = atual->esq;
		else if(cmp > 0) // palavra é maior que o atual
			atual = atual->dir;
		else{
			// palavra ja esta inserida.
			// deve-se buscar dentro da lista do nodo atual a posicao para a palavra
		}
	} // fim while percorre arvore

		// lembrar de faze a insercao caso a palavra ja exista - OBS verificar while no ELSE seria onde cai neste caso

		
		atual = (TpNodo*) malloc(sizeof(TpNodo));
		atual->info = (char*) malloc(sizeof(strlen(palavra)));
		strcpy(atual->info, palavra);
		atual->cor = RED;
		atual->esq = atual->dir = nodoNULL;
		atual->pai = pai;
		// verificar se o pai->info < || > atual->info
		cmp = strcmp(atual->info,pai->info);
		if(cmp < 0) // atual é menor que pai->info
			pai->esq = atual;
		else pai->dir = atual;
	}


	puts("nodo inserido\n\n");

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

