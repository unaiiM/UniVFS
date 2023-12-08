#ifndef DISK_H
#define DISK_H

#include <stdio.h>
#include <stdbool.h>
#include "types.h"

#define DISK_INFO_LEN 72
#define DISK_INFO_NAME_LEN 64
#define BLOCK_LEN 4096
#define BLOCK_CONTENT_LEN 4008
#define BLOCK_POINTER_CONTENT_LEN 4064
#define IBLOCK_START 1
#define IBLOCK_NULL 0
#define IBLOCK_LEN 8
#define BLOCK_TYPE_LEN 1
#define BLOCK_NAME_LEN 63
#define BLOCK_SIZE_LEN 8
#define BLOCK_POINTER_NULL_LEN 7
#define MAX_DISKS 26 // abc = 26

typedef long IBlock; // block id
typedef unsigned char IDisk; // disk id, example = a, b, c, d,...

/* 
    The iblock is the highest iblock identifier
    where will be used in the next block creation
*/
struct Disk {
    String name;
    String path;
    IDisk idisk; 
    IBlock iblock;
};

extern struct Disk disks[MAX_DISKS];

void create_disk(char* name, char* file_path);

/* load disk info */
struct Disk load_disk(char* path, IDisk letter);

/* check if the letter is in abc */
bool is_valid_letter(IDisk letter);

/* check if the letter is not used */
bool is_used_letter(IDisk letter);

/* read disk from wich byte end */
Byte* read_disk(long start, long end);

/* functions to test results */
void print_disk(struct Disk disk);

#endif