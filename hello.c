#include <stdio.h>

int main()
{
    int x = 12;
    float y = 3.14;
    char s[14] = "Hello, World!";

    printf("x is %d, ", x);
    printf("y is %f\n", y);
    for(int i = 0; i < 5; i++)
    {
        int num = 5;
        printf("%d * %d = %d\n", i, num, i * num);
    }

}