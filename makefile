CC = cc
TARGET = prover
OBJ =  prover.o
LIBS = 
INC = -I./ 
DEF = 
CFLAGS = $(INC) $(DEF) -g

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LIBS)

clean:	
	rm *.o

