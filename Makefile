CC=g++
CFLAGS = -std=c++98 -pedantic
_CFILES=main.cpp setup.cpp methods/flag_methods.cpp
CFILES=$(addprefix source/, $(_CFILES))
OFILES=$(subst .cpp,.o, $(CFILES))
INCLUDES=source/models/

all: $(OFILES)
	$(CC) -o httpserver $(OFILES)
	echo $(CFILES)

fclean:
	rm source/*.o
	rm httpserver

re: fclean all

%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS) -I$(INCLUDES)

print-%:
	@echo $* = $($*)