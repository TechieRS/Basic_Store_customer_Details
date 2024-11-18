#include <stdio.h>
int main(){
    char customerName[50];
    int phoneNumber;
    char itemsOrdered[500];
    float itemsCost;
    printf("Customer Name : ");
    scanf("%s",customerName);
    printf("Phone Number : ");
    scanf("%d",&phoneNumber);
    printf("Items : ");
    scanf("%s",itemsOrdered);
    printf("Items Cost : ");
    scanf("%f",&itemsCost);

    

    return 0;
}