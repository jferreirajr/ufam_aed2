/*
 * Author: Jony de O. Ferreira Jr.
 * Created:	Seg 30 Jun 2014 13:17:50 AMT
 * File: 
 */

#include "lista.h"

int main(void){
	struct lista *lista;
	int entrada;
	lista = nova_lista();
	do{
		scanf("%d",&entrada);
		if(entrada == -1){
			inverter(lista);
			imprimir(lista);
			return EXIT_SUCCESS;
		}
		inserir(entrada, lista);
	}while(true);
}
