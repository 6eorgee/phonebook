.PHONY: all clean

all:
	gcc -x c++ main.c routines.c -lstdc++ -o phonebook
clean:
	rm -rf phonebook

