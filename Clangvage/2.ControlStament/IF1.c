#include<stdio.h>

int main()
{
    float cost_price,selling_price;

    printf("Enter the cost_price:");
    scanf("%f", &cost_price);

    printf("Enter the selLing price:");
    scanf("%f", &selling_price);

    if(selling_price > cost_price)
    {
        printf("%f is profit",selling_price - cost_price);
    }
    else if(cost_price > selling_price)
    {
        printf("%f is loss",cost_price-selling_price);
    }
    else 
    {
        printf("%f is not lost and not a profit his purchres actual amount");
    }

    return 0;
}