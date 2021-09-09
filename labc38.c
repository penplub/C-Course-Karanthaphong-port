#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    char FirstName[] = "Karanthaphong";
    // if (FirstName == "Karanthaphong"){
    //     printf("Equal");
        
    // }else{
    //     printf("Not Equal");
    // }
    if (strcmp(FirstName,"Karanthaphong") == 0)//คืนค่า0แสดงว่าเท่ากัน
    {
        printf("Equal");

    }else{
        printf("Not equal");
    }
    return 0 ;



}