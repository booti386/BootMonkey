#include <stdio.h>
#include <stdlib.h>

#include <BM/BinFormats/RBM.h>
#include <common/util.h>

FILE *Program;

int main(int argc, char **argv)
{
	if(argc!=2)
		fatal("Usage : %s <filename.rbm>\n", argv[0]);
if((Program=fopen(argv[1], "r"))==NULL)
fatal("Error while trying to open \"%s\" in read-only mode.\n", argv[1]);

	exit(0);
}
