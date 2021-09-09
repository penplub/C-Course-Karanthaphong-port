#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    char FullName[] = "Karanthaphong Areerak";
    int count = strlen(FullName);
    printf("My name is : %s\n",FullName);
    printf("Length : %d",count);//ช่องว่างนับ1ตัวอักษร
    return 0;

}