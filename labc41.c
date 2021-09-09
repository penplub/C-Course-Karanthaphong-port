#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    char FullName[] = "Karanthaphong";
    char FullName_Copy[20];
    strncpy(FullName_Copy,FullName,5);
    printf("%s",FullName_Copy);
    return 0;

}