C = g++
CFLAGS = -std=c++11 -Wall

SRCS = main.cpp employee.cpp group.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(C) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

