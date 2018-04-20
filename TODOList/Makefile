CPPFLAGS=-Wall -Wextra -Werror -I./
LIBFLAGS=-lncurses
BINDIR=bin
BUILDDIR=build
SRCDIR=src
INCLUDEDIR=include
TARGET=-o bin/TODOList
CPPC=clang++
OBJECTS=$(BUILDDIR)/ncurses_ui.o $(BUILDDIR)/main.o $(BUILDDIR)/repl_ui.o
SRC=$(SRCDIR)/ncurses_ui.cpp $(SRCDIR)/main.cpp
RM=rm -rf
MKDIR=mkdir -p

all: build clean

build: $(OBJECTS)
	$(MKDIR) $(BINDIR)
	$(MKDIR) $(BUILDDIR)
	$(CPPC) $(LIBFLAGS) $(CPPFLAGS) $(OBJECTS) $(TARGET)

$(BUILDDIR)/ncurses_ui.o: $(SRCDIR)/ncurses_ui.cpp $(INCLUDEDIR)/ncurses_ui.h
	$(MKDIR) $(BUILDDIR)
	$(CPPC) $(CPPFLAGS) -c $(SRCDIR)/ncurses_ui.cpp -o build/ncurses_ui.o

$(BUILDDIR)/repl_ui.o: $(SRCDIR)/repl_ui.cpp $(INCLUDEDIR)/repl_ui.h
	$(MKDIR) $(BUILDDIR)
	$(CPPC) $(CPPFLAGS) -c $(SRCDIR)/repl_ui.cpp -o build/repl_ui.o


$(BUILDDIR)/main.o: $(SRCDIR)/main.cpp
	$(MKDIR) $(BUILDDIR)
	$(CPPC) $(CPPFLAGS) -c $(SRCDIR)/main.cpp -o build/main.o

clean:
	$(RM) $(BUILDDIR)

rebuild: clean build

rebuild_clean: clean all
