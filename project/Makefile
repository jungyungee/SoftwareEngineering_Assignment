
CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = main.out

SRC = \
    main.cpp \
    do_task.cpp \
    control/register.cpp \
    control/login.cpp \
    control/logout.cpp \
    control/add_bike.cpp \
    boundary/register_ui.cpp \
    boundary/login_ui.cpp \
    boundary/logout_ui.cpp \
    entity/system_user.cpp \
    entity/member.cpp \
    entity/member_repository.cpp \
    entity/manager.cpp \
    entity/bike.cpp \
    entity/bike_repository.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
