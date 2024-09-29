#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character:");
    scanf("%c",&ch);

    printf("Your character : %C \n",ch);
    printf("ASCII value: %d \n",ch);

    printf("Size of charracter : %d \n",sizeof(ch));

    return 0;
}
/*   Enter the Character:a
Your character : a
ASCII value: 97
Size of charracter : 1
*/