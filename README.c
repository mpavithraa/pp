# pp
#include <stdio.h>

int main()
{
    int num;
    
    /* Read number from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    

    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    else if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    else
    {
        printf("Number is ZERO");
    }

    return 0;
} 

