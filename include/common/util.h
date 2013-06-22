#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>

#define fatal(str, ...) ({fprintf(stderr, "FATAL : "); fprintf(stderr, str, __VA_ARGS__); exit(-1);})
#define warning(str, ...) ({fprintf(stderr, "WARN  : "); fprintf(stderr, str, __VA_ARGS__);})
#define info(str, ...) ({fprintf(stderr, "INFO  : "); fprintf(stdout, str, __VA_ARGS__);})
#define debug(str, ...) ({fprintf(stderr, "DEBUG : "); fprintf(stdout, str, __VA_ARGS__);})

#endif
