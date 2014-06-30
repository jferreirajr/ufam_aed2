COMPILADOR=gcc
PARAMETROS=-W -Wall -ansi -pedantic -g
EXECUTAVEL=fila
FONTES=$(wildcard *.c)
OBJETOS=$(wildcard *.o)
all:$(EXECUTAVEL)

$(EXECUTAVEL): $(FONTES)
	$(COMPILADOR) -o $@ $^

%.o: %.c
	$(COMPILADOR) -O $@ -C $< $(PARAMETROS)

.PHONY: clean mrproper
clean:
	rm -rf $(OBJETOS)
mrproper: clean
	rm -rf $(EXECUTAVEL)


