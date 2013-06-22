#ifndef RBM_H
#define RBM_H

#include <stdint.h>

#include "RBMHeader.h"
#include "RBMSections.h"

typedef struct RBMSym
{
	char *Name; // NULL terminated string.
	uint64_t Addr; // Physical address of the symbol.
	struct RBMSym *Next;
} RBMSym;

typedef struct RBMSymsTable
{
	uint32_t NbEntries;
	RBMSym *FirstSymbol;
} RBMSymImportTable, RBMSymExportTable;

#endif
