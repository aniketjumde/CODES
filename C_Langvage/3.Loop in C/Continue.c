#include<stdio.h>

int main()
{

    for(int i=1;i<=10;i++)
    {
        if(i==8)
        {
            continue;
        }
        printf("%d ",i);
    }
    
    return 0;
}

// OUTPUT : 1 2 3 4 5 6 7 9 10 