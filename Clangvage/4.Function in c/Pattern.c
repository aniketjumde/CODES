#include<stdio.h>

void pattern(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
}

int right_angle_Triangle(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}

int mirror_right_angle(int num)
{
    for(int i=num;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n\n");
}

void left_angle_Triangle(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int sp=1;sp<=(num-i);sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
        printf("#");
        }
        printf("\n");
    }

    printf("\n\n");
}

void mirror_left_angle(int num)
{
    for(int i=num;i>=1;i--)
    {
        for(int sp=1;sp<=(num-i);sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

}

void Triangle(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int sp=1;sp<=num-i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");

        }
        printf("\n");
    }

    printf("\n\n");
}

void mirror_Triangle(int num)
{
    for(int i=num;i>=1;i--)
    {
        for(int sp=1;sp<=num-i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n\n");
}

void Diamond(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int sp=1;sp<=num-i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("# ");
        }
        printf("\n");
    }
    
    for(int i=num;i>=1;i--)
    {
        for(int sp=1;sp<=num-i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("# ");
        }
        printf("\n");
    }

    printf("\n\n");
}

void pattern_mix(int num)
{

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(j%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }

    printf("\n\n");
    

}

void  right_angle_Triangle_mix(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

}

void Diamond_mix(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int sp=1;sp<=num-i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }
    
    for(int i=num;i>=1;i--)
    {
        for(int sp=1;sp<=num-i;sp++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
           if(j%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
        }
        printf("\n");
    }


}



int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d",&num);

    pattern(num);

    right_angle_Triangle(num);

    mirror_right_angle(num);

    left_angle_Triangle(num);

    mirror_left_angle(num);

    Triangle(num);  

    mirror_Triangle(num);

    Diamond(num);

    pattern_mix(num);

    right_angle_Triangle_mix(num);

    Diamond_mix(num);

    


    return 0;
}