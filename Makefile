# XXX: Fix so that it redirect the executables to the bin directory

SRCS=$(wildcard src/*.c)

OBJS=$(SRCS:.c=)

all: $(OBJS)
