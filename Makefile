CC = g++
CFLAGS = -Wall -std=c++11
LDFLAGS = $(pkg-config --cflags --libs gtk+-3.0)

SOURCES = src/main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = lobsterpygui

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
    $(CC) $(CFLAGS) $(OBJECTS) -o $@ $(LDFLAGS)

%.o: %.cpp
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJECTS) $(EXECUTABLE)
