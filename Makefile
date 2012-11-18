CXX = g++
CXXFLAGS = -Wall

OBJS = main.o

APP = gfxh

all: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(APP) $(LDFLAGS)


clean:
	rm -f $(OBJS)
	rm -f $(APP)


