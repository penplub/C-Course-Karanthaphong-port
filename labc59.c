#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct Customer{
    int CustomerID;
    char FullName[100];
    float Salary;
};
int main(int argc,char *argv []){
    struct Customer c1;
    struct Customer c2;
    c1.CustomerID = 1001;
    strcpy(c1.FullName,"Karanthaphong Areerak");
    c1.Salary = 15000;
    c2=c1;




    printf("CustomerId : %d\n",c2.CustomerID);
    printf("FullName : %s\n",c2.FullName);
    printf("Salary : %f",c2.Salary);

    return 0 ;
}