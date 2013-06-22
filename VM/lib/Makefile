export BUILDDIR=$(BUILDDIR)/VM/lib
export BINDIR=$(BINDIR)/VM/lib

OBJS=libcore \
	libplatform \
	libaudio \
	libnet \
	libgui \
	lib2d \
	lib3d

all: dirs $(OBJS)

dirs:
	$(MKDIR) $(BUILDDIR) $(BINDIR)
	@$(foreach subdir, $(OBJS), $(MKDIR) $(BUILDDIR)/$(subdir); )

$(BINDIR)/libcore.bml: $(BUILDDIR)/libcore/libcore.bmo
	$(BMC) $(BMFLAGS) $^ -o $@

$(BUILDDIR)/%.bmo: %.bm
	$(BMC) $(BMFLAGS) -c $^ -o $@
