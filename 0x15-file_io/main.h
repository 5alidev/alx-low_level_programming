#ifndef _main_h_
#define _main_h_
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* _main_h_ */