#include <stdio.h>

int main()
{
    int raqam;

    printf("Har qanday raqamni kiriting: ");
    scanf("%d", &raqam);

    if(raqam & 1)
    {
        printf("%d galati .", raqam);
    }
    else
    {
        printf("%d hato.", raqam);
    }

    return 0;
}
