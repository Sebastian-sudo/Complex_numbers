CC = g++
CFLAGS = -Wall 
LDFLAGS = 
OBJFILES = main.o
TARGET = Complex_numbers

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~