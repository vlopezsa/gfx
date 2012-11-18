CXX = g++
CXXFLAGS = -Wall

OBJS = main.o model_obj.o

APP = gfxh

all: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(APP) $(LDFLAGS)


clean:
	rm -f $(OBJS)
	rm -f $(APP)


