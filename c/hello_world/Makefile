CC = gcc
CFLAGS = -Wall
TARGET = helloworld

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET)