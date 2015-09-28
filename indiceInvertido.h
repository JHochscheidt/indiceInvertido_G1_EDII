#ifndef _INDICE_INVERTIDO_H
#define indiceInvertido

#define RED 1
#define BLACK 0

typedef struct _lista{
	struct _lista *ant;
	struct _lista *prox;
	int pos;
}TpLista;

typedef struct  _nodo{
	struct _nodo *pai;
	struct _nodo *esq;
	struct _nodo *dir;
	int cor;
	char *info; // palavra a ser indexada
	TpLista *ocorrencias; // ponteiro para a lista com os arquivos em que a palavra (info) ocorre	
}TpNodo;




// funcoes principais
TpNodo *insert(char *palavra, TpNodo *root);



// funcoes auxiliares
void Desenha(TpNodo *root , int nivel);








#endif
