/*
 * LISTAS DUPLAMENTE ENCADEADAS
 * IMPLEMENTAÇÃO SIMPLES
 */

#ifndef LISTA_DUPLAMENTE_ENCADEADA_IS_H_
#define LISTA_DUPLAMENTE_ENCADEADA_IS_H_

#include "jferreirajr.h"

struct lista* nova_lista(void);
struct info* nova_info(int valor);
void inserir(int valor, struct lista* lista);
void inverter(struct lista* lista);
void imprimir(struct lista* lista);

#endif
