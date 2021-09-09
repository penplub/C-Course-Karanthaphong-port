#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    char Name1[] = "Karanthaphong";
    char Name2[] = "Karanthapong";
    if(strncmp(Name1,Name2,2)==0){//บอกว่าต้องเปรียบเทียบกี่ตัวอักษร
        printf("equal");

    }else{
        printf("Not equal");
    }
}