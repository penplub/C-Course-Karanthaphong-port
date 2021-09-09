#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define VATRATE 0.1f สร้างค่าคงที่
int main(int argc,char *argv []){
    int price = 1000;
    const float VATRATE = 0.07f;//บรรทัดนี้จะหายถ้าสร้างค่าคงที่ข้สงบนแล้ว
    float vat = price * VATRATE;
    float pricewithvat = price + vat;

    printf("Price : %d\n", price);
    printf("Vat rate : %f\n",VATRATE);
    printf("Vat : %f\n", vat);
    printf("Price with vat : %f",pricewithvat);
    return 0;



}