
CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = main.out

SRC = \
    main.cpp \
    do_task.cpp \
    control/register.cpp \
    boundary/register_ui.cpp \
    entity/system_user.cpp \
    entity/member.cpp \
    entity/manager.cpp \
    entity/database.cpp \
    entity/bike.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
