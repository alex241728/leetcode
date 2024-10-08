CC = gcc
CFLAGS = -Wall -O2 -Werror

TARGET = main
SRCS = main.c solution.c array.c
HDRS = solution.h array.h
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