CC = gcc
TARGET = prover
OBJ =  prover.o pqueue.o
LIBS = pqueue.h
INC = -I./
DEF = 
CFLAGS = $(INC) $(DEF) -g

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LIBS)

clean:	
	rm *.o

