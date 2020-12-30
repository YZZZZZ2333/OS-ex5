#include<stdio.h>
#include"function/api.h"
#include"global/var.h"
#include"util/disk.h"
#include"shell/shell.h"
#include"util/time.h"
char sysname[20]="mydisk";
char pwd[80];
//int BLOCK_SIZE=1024;
//int BLOCK_NUMS=1024;
extern int FAT_ITEM_NUM;
FILE * DISK;
BLOCK0 block0;
FATitem FAT1[1024];
FATitem FAT2[1024];
FCB presentFCB;
useropen uopenlist[MAX_FD_NUM];
char * type[2]={"file","directory"};
int main()
{
    startsys();
    go();
    return 0;
}
