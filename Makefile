# Компилятор
CXX := g++

# Флаги компиляции
CXXFLAGS := -std=c++17 -Wall -Wextra

# Исходные файлы
SRCS := main.cpp
OBJS := $(SRCS:.cpp=.o)
TARGET := hello.exe

# Основное правило
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Правило для .cpp → .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка
clean:
	del /Q *.o $(TARGET)

.PHONY: all clean