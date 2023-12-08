#include <stdio.h>
#include "disk.h"

int main(){
	printf("Wellcome to UniVFS");
	create_disk((char*) "hello", (char*) "./disks/hello.disk");
	return 0;
};