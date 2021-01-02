#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    if (num1 == 23 || num1 == 0 && num2 < 60)
    {
        printf("rat\n");
    }
    else if (num1 == 1 || num1 == 2 && num2 < 60)
    {
        printf("ox\n");
    }
    else if (num1 == 3 || num1 == 4 && num2 < 60)
    {
        printf("tiger\n");
    }
    else if (num1 == 5 || num1 == 6 && num2 < 60)
    {
        printf("rabbit\n");
    }
    else if (num1 == 7 || num1 == 8 && num2 < 60)
    {
        printf("dragon\n");
    }
    else if (num1 == 9 || num1 == 10 && num2 < 60)
    {
        printf("snake\n");
    }
    else if (num1 == 11 || num1 == 12 && num2 < 60)
    {
        printf("horse\n");
    }
    else if (num1 == 13 || num1 == 14 && num2 < 60)
    {
        printf("sheep\n");
    }
    else if (num1 == 15 || num1 == 16 && num2 < 60)
    {
        printf("monkey\n");
    }
    else if (num1 == 17 || num1 == 18 && num2 < 60)

    {
        printf("rooster\n");
    }
    else if (num1 == 19 || num1 == 20 && num2 < 60)
    {
        printf("dog\n");
    }
    else if (num1 == 21 || num1 == 22 && num2 < 60)
    {
        printf("pig\n");
    }
    return 0;
}