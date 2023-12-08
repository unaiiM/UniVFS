#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>
#include "types.h"

/*
    Pass the number into array dividing it
    in bytes. The size represents the size
    of the number, example, if the number 
    is an int then the size is 4.
*/
void split_number(long number, size_t size, Byte* source);

#endif