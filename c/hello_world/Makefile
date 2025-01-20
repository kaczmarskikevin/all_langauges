CC = gcc
CFLAGS = -Wall
TARGET = helloworld

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) hello.c startup.c

clean:
	rm -f $(TARGET)