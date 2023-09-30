CC = g++
CFLAGS = $(shell pkg-config --cflags gtk+-3.0)
LIBS = $(shell pkg-config --libs gtk+-3.0)
SRC = src/main.cpp
EXECUTABLE = lobsterpygui

.PHONY: all clean

all: $(EXECUTABLE)

check: $(EXECUTABLE) #TODO: setup a proper non-GUI check other than ./$(EXECUTABLE)
distcheck: $(EXECUTABLE) #TODO: setup a proper distcheck

$(EXECUTABLE): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@ $(LIBS)

clean:
	rm -f $(EXECUTABLE)
