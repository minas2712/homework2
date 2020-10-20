CC = c++
LD = c++

CCFLAGS = 
LDFLAGS = 

output: task.o 
	$(LD) $(LDFLAGS) task.o -o output

task.o: ll.cpp
	$(CC) $(CCFLAGS) -c ll.cpp -o task.o


clear:
	rm -f *.o output
