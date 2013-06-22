OBJS=$(BINDIR)/bmvm

all: $(OBJS)

$(BINDIR)/bmvm: $(BUILDDIR)/BootMonkeyVM.o
	$(CC) $(CFLAGS) $^ -o $@

$(BUILDDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@
