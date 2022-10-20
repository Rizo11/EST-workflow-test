TARGET = linal
CC = gcc

PREF_SRC = ./src/
PREF_OBJ = ./obj/
PREF_LIB = ./lib/

SRC = $(wildcard $(PREF_SRC)*.c)
LIB = $(wildcard $(PREF_LIB)*.c)

OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC))
OBJ += $(patsubst $(PREF_LIB)%.c, $(PREF_OBJ)%.o, $(LIB))

$(TARGET) : $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

$(PREF_OBJ)%.o : $(PREF_LIB)%.c
	$(CC) -c $^ -o $@

$(PREF_OBJ)%.o : $(PREF_SRC)%.c
	$(CC) -c $^ -o $@

.PHONY: clean
clean :
	# deleting $(TARGET) and everything with .o extension
	rm $(TARGET) $(PREF_OBJ)*.o