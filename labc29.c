#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    int i =1;
    int j = 10;
    do{//เงื่อนไขเป็นเท็จไม่ทำ เป็นจริงเข้ารอบ2 รอบแรกไม่ตรวจสอบเงื่อนไข
        printf("Value : %d\n",i);
        i = i+1;
    }while(i<=j);
    return 0;
    }
 

