OBJS=VM lib
.PHONY: dirs $(OBJS)

export BUILDDIR=$(COMMON_BUILDDIR)/VM
export BINDIR=$(COMMON_BINDIR)/VM

all: dirs $(OBJS)

dirs:
	@mkdir -p $(BUILDDIR) $(BINDIR)

VM:
	$(MAKE) -C VM

lib:
	$(MAKE) -C lib
