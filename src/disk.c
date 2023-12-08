#include <stdio.h>
#include <strings.h>
#include "disk.h"
#include "utils.h"

void create_disk(char* name, char* file_path){
    FILE* fdisk = fopen(file_path, "w");
    Byte info[DISK_INFO_LEN]; 

    memset(info, 0, DISK_INFO_LEN);
    strcpy(info, name);

    Byte iblock_arr[IBLOCK_LEN]; 
    split_number(IBLOCK_START, sizeof(IBlock), iblock_arr);
    memcpy(info + (DISK_INFO_NAME_LEN * sizeof(Byte)), iblock_arr, IBLOCK_LEN * sizeof(Byte));

    fwrite(info, sizeof(Byte), DISK_INFO_LEN, fdisk);
    fclose(fdisk);    
};