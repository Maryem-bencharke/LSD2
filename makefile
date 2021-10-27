SRC = exercice.c
OBJ = exercice.o
LIB_NAME = exercice lib_mylib.a

all:



$(LIB_NAME):
				gcc -c $(SRC)
				ar rcs lib_mylib.a $(OBJ)
                

clean:
                rm $(OBJ)

fclean: clean
		rm $(LIB_NAME)
re:all