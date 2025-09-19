CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -std=c11
SRC = src/pq.c
OBJ = $(SRC:.c=.o)
TARGET = libpq.so

UNITY_DIR = unity/src
TEST_SRC = tests/test_pq.c

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -shared -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

test: $(TARGET)
	$(CC) $(CFLAGS) -I$(UNITY_DIR) $(TEST_SRC) $(SRC) $(UNITY_DIR)/unity.c -o test_pq
	./test_pq

clean:
	rm -f $(OBJ) $(TARGET) test_pq

