CC=g++
CFLAGS=-std=c++98 -pedantic
_CFILES = main.c
CFILES = $(addprefix source/, $(_CFILES))
OFILES= $(subst .c,.o, $(CFILES))
_DEPS= myhttp.h
DEPS= $(addprefix includes/, $(_DEPS))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OFILES)
	$(CC) -o httpserver $(OFILES)
	echo $(CFILES)

fclean:
	rm source/*.o
	rm httpserver

re: fclean all

print-%:
	@echo $* = $($*)