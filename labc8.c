#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv []){
    char c = 'A';
    short age = 35;
    int salary = 24000;
    long price = 12000000;
    float cost = 200.50;

    printf("char : %c",c);//แสดงตัวอักษร1ตัว%c
    printf("\nchar : %d",c);//รหัสประจำตัวของตัวอักษร
    printf("\n-------------------\n");
    printf("short : %d" ,age);
    printf("\nint : %d",salary);
    printf("\nlong : %d",price);
    printf("\nfloat : %f",cost);

}