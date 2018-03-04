CXXFLAGS=-std=c++11 -Wall -Wextra -Werror -g
TARGET=disp_image

$(TARGET): $(addsuffix .cpp, $(TARGET))
	g++ -o $@ $< $(CXXFLAGS) `pkg-config opencv --libs --cflags`

.PHONY: clean
clean:
	rm -f $(TARGET)
