CC = gcc
CFLAGS = -Wall -O2 -Werror

# directories
OUT_DIR = ../out
ARRAY_DIR = $(OUT_DIR)/array
SOLUTION_DIR = $(OUT_DIR)/two_sum_1

# source files
ARRAY_SRC = ../array/array.c
MAIN_SRC = main.c
SOLUTION_SRC = solution.c

# object files
ARRAY_OBJ = $(ARRAY_DIR)/array.o
MAIN_OBJ = $(SOLUTION_DIR)/main.o
SOLUTION_OBJ = $(SOLUTION_DIR)/solution.o

# executable
EXECUTABLE = $(SOLUTION_DIR)/main

$(ARRAY_DIR):
	mkdir -p $@

$(SOLUTION_DIR):
	mkdir -p $@

$(ARRAY_OBJ): $(ARRAY_SRC) | $(ARRAY_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(SOLUTION_OBJ): $(SOLUTION_SRC) | $(SOLUTION_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(MAIN_OBJ): $(MAIN_SRC) | $(SOLUTION_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(EXECUTABLE): $(MAIN_OBJ) $(ARRAY_OBJ) $(SOLUTION_OBJ)
	$(CC) $^ -o $@

# run
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# clean
clean:
	rm -rf $(OUT_DIR)/array $(OUT_DIR)/two_sum_1