#ifndef RBMHEADER_H
#define RBMHEADER_H

#include <stdint.h>

#define RBM_HEADER_TYPE_OBJ		0
#define RBM_HEADER_TYPE_EXE		1
#define RBM_HEADER_TYPE_LIB		2
#define RBM_HEADER_TYPE_DMP		3

#define RBM_HEADER_SUBTYPE_EXE_CONSOLE	0
#define RBM_HEADER_SUBTYPE_EXE_GUI	1

typedef struct _RBMHeader
{
	uint8_t Signature[4]; // BM01
	uint8_t Type;
	uint8_t SubType;
	struct  __attribute__((packed)) {uint32_t Release; uint32_t Major; uint32_t Minor; uint32_t Build;} Version;
	uint64_t SectionTableAddr;
	uint64_t EntryPoint;
} _RBMHeader;

#endif
