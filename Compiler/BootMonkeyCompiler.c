#include <stdio.h>
#include <stdlib.h>

#include <BM/BinFormats/RBM.h>
#include <common/util.h>

_RBMHeader RBMHeader = {
	.Signature="BM01",
	.Type=RBM_HEADER_TYPE_EXE,
	.SubType=RBM_HEADER_SUBTYPE_EXE_CONSOLE,
	.Version={0,0,0,0},
	.SectionTableAddr=0,
	.EntryPoint=0,
};

FILE *fp;

int main(int argc, char **argv)
{
	if(argc!=2)
		fatal("Usage : %s <filename.bm>\n", argv[0]);
if((fp=fopen(argv[1], "r"))==NULL)
fatal("Error while trying to open \"%s\" in read-only mode.\n", argv[1]);

	exit(0);
}
