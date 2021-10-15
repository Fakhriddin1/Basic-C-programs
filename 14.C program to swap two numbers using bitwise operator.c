
#include <stdio.h>

int main()
{
    int raqam1, raqam2;

    printf("Enter any two numbers: ");
    scanf("%d%d", &raqam1, &raqam2);

    printf("Raqam1 ning asl qiymati = %d\n", raqam1);
    printf("Raqam2 ning asl qiymati = %d\n", raqam2);

    raqam1 ^= raqam2;
    raqam2 ^= raqam1;
    raqam1 ^= raqam2;

    printf("Raqam1 almashtirilgandan keyin = %d\n", raqam1);
    printf("Raqan2 almashtirilgandan keyin = %d\n", raqam2);

    return 0;
}
