CC = g++
SRC_DIR = ./src
INC_DIR = ./inc
EXECUTABLE = taskmanager.out

$(EXECUTABLE):
	$(CC) $(SRC_DIR)/main.cpp $(SRC_DIR)/task.cpp $(SRC_DIR)/taskmanager.cpp -o $(EXECUTABLE) -I$(INC_DIR)

clean:
	rm -f $(EXECUTABLE)

