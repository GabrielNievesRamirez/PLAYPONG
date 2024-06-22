# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
INCLUDE = -Iinclude
SRC = src
OBJ = obj
BIN = bin
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

# Archivos
SOURCES = $(wildcard $(SRC)/*.cpp)
OBJECTS = $(SOURCES:$(SRC)/%.cpp=$(OBJ)/%.o)
EXECUTABLE = $(BIN)/mi-proyecto-juego

# Reglas
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

$(OBJ)/%.o: $(SRC)/%.cpp
	@mkdir -p $(OBJ)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ -c $<

clean:
	rm -rf $(OBJ) $(BIN)/*

.PHONY: all clean
