CXX := clang++
CXXFLAGS := -g -std=c++17
INCLUDES := -I /usr/local/include/Eigen

BUILD_DIR := build

SOURCES=$(wildcard *.cpp)

TARGET:=$(BUILD_DIR)

OBJS:=$(patsubst ./%.cpp,$(BUILD_DIR)/%.o,$(SOURCES)) #good

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $^ -o $@

