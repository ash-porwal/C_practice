//writing a program to check whether the given number is positive or negative
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number to check whether the given number is positive or negative: \n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("The number is negative\n");
    }
    else if(num > 0)
    {
        printf("The number is positive\n");
    }
    else {
        printf("0 is neither negative nor positive\n");
    }

    return 0;
}