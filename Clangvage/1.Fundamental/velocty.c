/*write a C program to accept initial velocity , acceleration and time 
print the final velocityt. (v = u + at )*/
#include<stdio.h>
int main()
{
    float intial_velocity,acceleration,time;
    float final_velocity;
    printf("Enter the value of intial velocity:");
    scanf("%f",&intial_velocity);
    printf("Enter the value of accelertation:");
    scanf("%f",&acceleration);
    printf("Enter the value of time:");
    scanf("%f",&time);

    final_velocity=intial_velocity + acceleration*time ;
    printf("final velocity is %f \n",final_velocity);
    
    return 0;
}