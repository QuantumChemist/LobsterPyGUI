CC = g++
CFLAGS = $(shell pkg-config --cflags gtk+-3.0)
LIBS = $(shell pkg-config --libs gtk+-3.0)
SRC = src/main.cpp
EXECUTABLE = lobsterpygui

.PHONY: all clean

all: $(EXECUTABLE)

check: $(EXECUTABLE)

distcheck: $(EXECUTABLE)

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@ $(LIBS)

clean:
	rm -f $(EXECUTABLE)
