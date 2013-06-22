OBJS=Compiler VM
.PHONY: dirs $(OBJS)

export INCLUDEDIR=$(PWD)/include

export COMMON_BUILDDIR=$(PWD)/build
export COMMON_BINDIR=$(PWD)/bin
export CC=gcc
export CFLAGS=-Wextra -Wall -Werror -g -O0 -std=c99 -I$(INCLUDEDIR)

export BMC=bmc
export BMFLAGS=

export MAKE=make
export MKDIR=mkdir -p

all: dirs $(OBJS)

dirs:
	@$(MKDIR) $(COMMON_BUILDDIR) $(COMMON_BINDIR)

VM:
	$(MAKE) -C VM

Compiler:
	$(MAKE) -C Compiler
