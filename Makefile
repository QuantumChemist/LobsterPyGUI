CC = g++
CFLAGS = --cflags -Wall -std=c++11
LDFLAGS = --libs gtk+-3.0

SOURCES = src/main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = lobsterpygui

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
    $(CC) -o $@ $(pkg-config $(CFLAGS) $(OBJECTS) $(LDFLAGS))

%.o: %.cpp
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJECTS) $(EXECUTABLE)
