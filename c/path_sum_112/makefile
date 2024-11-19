CC = gcc
CFLAGS = -Wall -O2 -Werror

# directories
OUT_DIR = ../out
QUEUE_DIR = $(OUT_DIR)/queue
TREE_DIR = $(OUT_DIR)/tree/binary_tree
SOLUTION_DIR = $(OUT_DIR)/path_sum_112

# source files
TREE_NODE_SRC = ../tree/binary_tree/tree_node.c
QUEUE_NODE_SRC = ../queue/queue_node.c
SOLUTION_SRC = solution.c
MAIN_SRC = main.c

# object files
TREE_NODE_OBJ = $(TREE_DIR)/tree_node.o
QUEUE_NODE_OBJ = $(QUEUE_DIR)/queue_node.o
MAIN_OBJ = $(SOLUTION_DIR)/main.o
SOLUTION_OBJ = $(SOLUTION_DIR)/solution.o

# executable
EXECUTABLE = $(SOLUTION_DIR)/main

$(TREE_DIR):
	mkdir -p $@

$(QUEUE_DIR):
	mkdir -p $@

$(SOLUTION_DIR):
	mkdir -p $@

$(TREE_NODE_OBJ): $(TREE_NODE_SRC) | $(TREE_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(QUEUE_NODE_OBJ): $(QUEUE_NODE_SRC) | $(QUEUE_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(SOLUTION_OBJ): $(SOLUTION_SRC) | $(SOLUTION_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(MAIN_OBJ): $(MAIN_SRC) | $(SOLUTION_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(EXECUTABLE): $(MAIN_OBJ) $(SOLUTION_OBJ) $(QUEUE_NODE_OBJ) $(TREE_NODE_OBJ)
	$(CC) $^ -o $@

# run
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# clean
clean:
	rm -rf $(OUT_DIR)/tree/binary_tree $(OUT_DIR)/queue $(OUT_DIR)/path_sum_112