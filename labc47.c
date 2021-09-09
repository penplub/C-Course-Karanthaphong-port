#include <stdio.h>//byvalue
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void ProcessData(int x){
    x = x+100;//ค่าที่ส่งไปเป็นค่าcopy
}


int main(int argc,char *argv []){
    int num = 1;
    printf ("Num-Before : %d\n",num);
    ProcessData(num);
    printf("Num-After : %d",num);
    



    return 0;

}