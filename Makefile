SRC = 	./src/main.cpp \
		./src/loop.cpp \
		./src/parser.cpp
CC = g++
CFLAG = Wall
EXEC_NAME = sqlite

all: $(EXEC_NAME)

$(EXEC_NAME):
	$(CC) -o $(EXEC_NAME) $(SRC)

clean:
	rm -f $(EXEC_NAME)

re: clean all