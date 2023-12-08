#include "../include/utils.h"

void split_number(long number, size_t size, Byte* source){
    for(int i = 0; i < size; i++){
        source[i] = (number >> 8 * i) & 0xFF;
    };
};