CC = gcc
CFLAGS = -Wall -g

build:cutie.o piesa.o piesa_galbena.o cutie_piese_galbene.o
	g++ -g -Wall main.cpp cutie.cpp piesa.cpp piesa_galbena.cpp cutie_piese_galbene.cpp -o ceva
cutie.o: cutie.cpp
piesa.o: piesa.cpp
piesa_galbena.o:piesa_galbena.cpp
cutie_piese_galbene.o:cutie_piese_galbene.cpp

.PHONY: clean

clean:
	rm ceva