OBJS=Compiler
.PHONY: dirs $(OBJS)

export BUILDDIR=$(COMMON_BUILDDIR)/Compiler
export BINDIR=$(COMMON_BINDIR)/Compiler

all: dirs $(OBJS)

dirs:
	@mkdir -p $(BUILDDIR) $(BINDIR)

Compiler: $(BINDIR)/bmc

$(BINDIR)/bmc: $(BUILDDIR)/BootMonkeyCompiler.o
	$(CC) $(CFLAGS) $^ -o $@

$(BUILDDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@
