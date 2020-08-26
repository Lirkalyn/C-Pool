##
## EPITECH PROJECT, 2019
## Day_10
## File description:
## makefile
##
.PHONY : all generate_o generate_lib link_and_move_lib move_h clean

all : move_h generate_o generate_lib link_lib

move_h :
	cp my.h ../../include/
	cp do-op.h ../../include/

generate_o : 
	gcc -c *.c

generate_lib :
	ar r libmy.a *.o

link_lib :
	ranlib libmy.a
	rm *.o

clean :
	rm ../../include/*.h
	rm *.a

