CC = gcc
CFLAGS = -Wall -std=c99 -O0
TARGET = prog
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

medir: $(TARGET)
	./medir.sh

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all run medir clean
