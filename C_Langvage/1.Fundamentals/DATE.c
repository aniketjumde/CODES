#include<stdio.h>
int main()
{
    int day,month,year;
    printf("Enter the Date:");
    scanf("%d/%d/%d", &day, &month, &year);// scanf mhade appan / ya symbol natar next input gheil

    printf("Today date is %d-%d-%d",day,month,year);
    return 0;
}