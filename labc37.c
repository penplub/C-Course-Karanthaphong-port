#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc,char *argv []){
    char FirstName[] = "Karanthaphong";
    char LastName[] = "Areerak";
    char FullName[50];//ไม่เกิน50word

    strcat(FullName,FirstName);//ฝังในfullname
    strcat(FullName," ");
    strcat(FullName,LastName);
    printf("FirstName : %s\n",FirstName);
    printf("LastName : %s\n",LastName);
    printf("------------------------\n");
    printf("FullName : %s",FullName);

    return 0 ;


}