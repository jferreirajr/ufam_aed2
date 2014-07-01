/*
 * Author: Jony de O. Ferreira Jr.
 * Created:	Seg 30 Jun 2014 13:20:36 AMT
 * File: lista.c
 */

#include "lista.h"

struct info{
	int valor; /*O ideal é ser 'void *' */
	struct info* prox;
	struct info* prev;
};

struct lista{
	struct info* inicio;
	struct info* fim;
};

struct lista* nova_lista(void){
	struct lista* lista;
	lista = jfmalloc(sizeof(struct lista));
	lista->inicio = NULL;
	lista->fim = NULL;
	return lista;
}

struct info* nova_info(int valor){
	struct info* info;
	info = jfmalloc(sizeof(struct info));
	info->valor = valor;
	info->prev = NULL;
	info->prox = NULL;
	return info;
}

void inserir(int valor, struct lista* lista){
	if(NOT lista)
		lista = nova_lista();
	else if(NOT lista->inicio){
		lista->inicio = nova_info(valor);
		lista->fim = lista->inicio;
	}else{
		lista->fim->prox = nova_info(valor);
		lista->fim->prox->prev = lista->fim;
		lista->fim = lista->fim->prox;
	}
}

void inverter(struct lista* lista){
	struct info *aux, *tmp;
	if(NOT lista)
		lista = nova_lista();
	else{
		aux = lista->inicio;
		while(aux){
			tmp = aux->prox;
			aux->prox = aux->prev;
			aux->prev = tmp;
			aux = tmp;
		}
		tmp = lista->inicio;
		lista->inicio = lista->fim;
		lista->fim = tmp;
	}
}

void imprimir(struct lista* lista){
	struct info *aux;
	if(NOT lista)
		lista = nova_lista();
	else{
		aux = lista->inicio; 
		while(aux != NULL){
			printf("%d ", aux->valor);
			aux = aux->prox;
		}
	}
}

void inserir_ordenar(int valor, struct lista* lista){
	struct info* aux;
	if(NOT lista){
		lista = nova_lista();
	}else if(NOT lista->inicio){
		lista->inicio = nova_info(valor);
		lista->fim = lista->inicio;
	}else{
		aux = lista->inicio;
		while(aux){
			if(aux->valor > valor){
				if(NOT aux->prev){
					lista->inicio = nova_info(valor);
					aux->prev = lista->inicio;
					lista->inicio->prox = aux;
				}else{
					aux->prev->prox = nova_info(valor);
					aux->prev->prox->prev = aux->prev;
					aux->prev->prox->prox = aux;
					aux->prev = aux->prev->prox;
				}
				return;
			}else if(NOT aux->prox){
				aux->prox = nova_info(valor);
				lista->fim = aux->prox;
				aux->prox->prev = aux;
				return;
			}
			aux = aux->prox;
		}
	}
}
