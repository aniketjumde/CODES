/* Display Fibbonicis series of nth term
    6=1 1 2 3 5
 */

#include<stdio.h>

int main()
{
    int n,f1,f2,f3;

    printf("How many Terms: ");
    scanf("%d",&n);

    f1=1;
    f2=0;

    printf("Fibbonicis Series ");
    for(int i=1;i<=n;i++)
    {
        f3=f1+f2;
        printf("%d ",f3);
        f1=f2;
        f2=f3;
    }

}
