//Creating and Initialising an Union//
#include<stdio.h>
union product
{
    char name[50];
    float pricepu;
    int quantity;
}p;
int main()
{
    float cost;
    printf("Enter the product name: ");
    scanf("%s",&p.name);
    printf("Enter the price per unit: ");
    scanf("%f",&p.pricepu);
    printf("Enter the quantity brought: ");
    scanf("%d",&p.quantity);
    cost=p.pricepu*p.quantity;
    printf("The amount spent on the product %s at the rate %f per unit for %d items= %f ruppees",p.name,p.pricepu,p.quantity,cost);
    return 0;
}