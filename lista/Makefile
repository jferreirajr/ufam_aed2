COMPILADOR=gcc
PARAMETROS=-W -Wall -ansi -pedantic -g
EXECUTAVEL=lista
FONTES=$(wildcard *.c)
OBJETOS=$(wildcard *.o)
all:$(EXECUTAVEL)

$(EXECUTAVEL): $(FONTES)
	$(COMPILADOR) -o $@ $^

%.o: %.c
	$(COMPILADOR) -o $@ -c $< $(PARAMETROS)

.PHONY: clean mrproper
clean:
	rm -rf $(OBJETOS)
mrproper: clean
	rm -rf $(EXECUTAVEL)


