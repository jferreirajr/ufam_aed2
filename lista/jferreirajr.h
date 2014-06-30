#ifndef JFERREIRAJR_H_
#define JFERREIRAJR_H_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include <ctype.h>

#define OR ||
#define AND &&
#define NOT !

#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y

void jferror(char tipo, char* local);
void* jfmalloc(unsigned int tamanho);
	
#endif
