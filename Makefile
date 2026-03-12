SRC = 	./src/main.cpp 					\
		./src/loop.cpp 					\
		./src/parser.cpp 				\
		./src/b_tree/add_element.cpp 	\
		./src/b_tree/display.cpp

CC = g++
CFLAG = Wall
EXEC_NAME = sqlite

all: $(EXEC_NAME)

$(EXEC_NAME):
	$(CC) -o $(EXEC_NAME) $(SRC)

clean:
	rm -f $(EXEC_NAME)

re: clean all