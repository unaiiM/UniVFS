#ifndef DISK_H
#define DISK_H

#include <stdio.h>

#define DISK_INFO_LEN 72
#define BLOCK_LEN 4096
#define BLOCK_CONTENT_LEN 4008
#define BLOCK_POINTER_CONTENT_LEN 4064
#define IBLOCK_LEN 8
#define BLOCK_TYPE_LEN 1
#define BLOCK_NAME_LEN 63
#define BLOCK_SIZE_LEN 8
#define BLOCK_POINTER_NULL_LEN 7

typedef long iblock;
typedef char byte;

FILE disk;

struct Disk {
    char* name;
    iblock iblock; // next iblock
};

void createDisk(char* name);

/* load disk info */
struct Disk loadDisk();

/* read disk from wich byte end */
byte* readDisk(long start, long end);


/* functions to test results */
void printDisk(struct Disk disk);

#endif