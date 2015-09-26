#ifndef _INDICE_INVERTIDO_H
#define indiceInvertido

#define RED 1
#define BLACK 0

typedef struct _nodo{
	struct _nodo *pai;
	struct _nodo *esq;
	struct _nodo *dir;
	int cor;
	char *info; // palavra a ser indexada
	struct _lista *ocorrencias; // ponteiro para a lista com os arquivos em que a palavra (info) ocorre	
}NODO;

typedef struct _lista{
	struct _lista *ant;
	struct _lista *prox;
	int pos;
}LISTA;
// definindo valores do nodo NULL

NODO *criaNodoNull();
LISTA *criaListaVazia();

NODO *insert();
NODO *delete();
void verificaArvore(NODO *root);








#endif
