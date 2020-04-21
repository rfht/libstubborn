CC ?=		cc
CFLAGS ?=	-O2 -pipe
RM ?=		rm -f
TARGET_LIB ?=	libstubborn.so
SRCS =		stubborn.c
MAJOR ?=	0
MINOR ?=	0

.PHONY: all
all: $(TARGET_LIB)

$(TARGET_LIB): stubborn.o
	$(CC) $(LDFLAGS) -shared -o $(TARGET_LIB).$(MAJOR).$(MINOR) stubborn.o

stubborn.o:
	$(CC) $(CFLAGS) -c -fPIC -Wall -Werror $(SRCS)

.PHONY: clean
clean:
	$(RM) $(TARGET_LIB) stubborn.o
