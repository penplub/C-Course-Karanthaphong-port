#include <stdio.h>//by refrence
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void ProcessData(int *x){
    *x =*x + 100;
}



int main(int argc,char *argv []){
    int num=1;//ไม่ใช่ตัวcopyแต่เป็นตัวจริง
    printf("Num-Before : %d\n",num);
    ProcessData(&num);
    printf("Num-After : %d",num);
    return 0;

    



    return 0;

}