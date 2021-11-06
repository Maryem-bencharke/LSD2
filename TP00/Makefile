SRC = ex01.c ex02.c
OBJ = ex01.o ex02.o
LIB_NAME = exercice lib_mylib.a

all:



$(LIB_NAME):
				gcc -c $(SRC)
				ar rcs lib_mylib.a $(OBJ)
                

clean:
                rm $(OBJ)

fclean: clean
		rm $(LIB_NAME)
re:
		rm $(OBJ)$(LIB)
		gcc -c $(SRC)
		ar rcs $(LIB) $(OBJ)