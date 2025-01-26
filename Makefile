CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic
SRC = src/main.c src/carta.c src/menu.c
OBJ = $(SRC:.c=.o)
TARGET = super_trunfo

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
