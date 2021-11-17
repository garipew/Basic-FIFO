#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

Fila* criaFilaVazia(){

	Fila* f = (Fila*)malloc(sizeof(Fila));
	Item* cabeca = criaItem(-1);
	f->primeiro = cabeca;
	f->ultimo = cabeca;

	f->primeiro->proximo = NULL;
	f->tamanho = 0;

	return f;

}

Item* criaItem(int chave){

	Item* c = (Item*) malloc(sizeof(Item));
	c->proximo = NULL;

	c->chave = chave;

	return c;
}

int filaVazia(Fila* f){

	if(f->ultimo == f->primeiro){
		return 1;
	}
	return 0;

}

void enfilera(Item* t, Fila* f){

	f->ultimo->proximo = t;
	t->proximo = NULL;
	f->ultimo = t;
	f->tamanho++;

}

void desenfilera(Fila* f){

	if(filaVazia(f)){
		printf("Fila Vazia!\n");
		return;
	}

	Item* aux = f->primeiro->proximo;
	if(aux == f->ultimo)
		f->ultimo = f->primeiro;
	f->primeiro->proximo = aux->proximo;
	f->tamanho--;


	free(aux);

}

void imprimeFila(Fila* f){

	if(filaVazia(f)){
		printf("Fila Vazia!\n");
		return;
	}

	Item* aux = f->primeiro->proximo;
	while(aux != f->ultimo->proximo){
		if(aux != f->ultimo)
			printf("%d <- ", aux->chave);
		if(aux == f->ultimo)
			printf("%d", aux->chave);
		aux = aux->proximo;
	}

	printf("\n");


}

void deletaFila(Fila* f){

	while(f->primeiro != f->ultimo){
		desenfilera(f);
	}

}
