/*
 * Author: Jony de O. Ferreira Jr.
 * Created:	Sex 27 Jun 2014 11:18:56 AMT
 * File: 
 */

#include "jferreirajr.h"

void jferror(char tipo, char* local){
	char erro[100];
	switch(tipo){
		case 0:
			strcpy(erro,"[!!]ERRO FATAL em ");
			strncat(erro, local, 81);
			perror(erro);
			exit(0);
	}
}

void* jfmalloc(unsigned int tamanho){
	void *novo;
	novo = malloc(tamanho);
	if(NOT novo)
		jferror(0,"jferreirajr.jfmalloc()");
	return novo;
}
