CC = gcc
CFLAGS = -Wall -O2 -Werror

TARGET = main
QUEUE_SRC_DIR = ../queue
TREE_SRC_DIR = ../tree/binary_tree
SRCS = main.c solution.c $(TREE_SRC_DIR)/tree_node.c $(QUEUE_SRC_DIR)/queue_node.c
HDRS = solution.h $(TREE_SRC_DIR)/tree_node.h $(QUEUE_SRC_DIR)/queue_node.h
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: run
run: $(TARGET)
	./$(TARGET)