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
    c1.CustomerID = 1001;
    strcpy(c1.FullName,"Karanthaphong Areerak");
    c1.Salary = 15000;

struct Customer c2;
    c2.CustomerID = 1001;
    strcpy(c2.FullName,"Karanthaphong Areerak");
    c2.Salary = 15000;

    printf("CustomerId : %d\n",c1.CustomerID);
    printf("FullName : %s\n",c1.FullName);
    printf("Salary : %f",c1.Salary);

    return 0 ;
}