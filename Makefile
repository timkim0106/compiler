# Compiler and flags
CXX = g++
CXXFLAGS = -g -std=c++11 -I./include  # Add any other necessary flags

# Source and object files
SRCS = $(wildcard src/*.cpp)  # Automatically finds all .cpp files in src/
OBJS = $(SRCS:.cpp=.o)        # Converts all .cpp file paths to .o files

# Executable name
TARGET = compiler

# Rule to link the object files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up the object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)
