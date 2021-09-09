#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <limits.h>
int main(int argc,char *argv []){//ขอบเขตข้อมูลแต่ละประเภทที่สามารถรับได้
    printf("char-max : %d\n", CHAR_MAX);
    printf("char-min : %d\n",CHAR_MIN);
    printf("----------------------------\n");
    printf("int-max : %d\n", INT_MAX);
    printf("int-min : %d\n ",INT_MIN);
    printf("----------------------------\n");
    printf("long-max : %ld\n",LONG_MAX);
    printf("long-min : %ld\n",LONG_MIN);
    printf("----------------------------\n");
    printf("float-max : %.6e", FLT_MAX);
    printf("float-min : %.6e", FLT_MIN);
    printf("----------------------------\n");
    printf("double-max : %.15e\n", DBL_MAX);
    printf("double-min : %.15e",DBL_MIN);



}