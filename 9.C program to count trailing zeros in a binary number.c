#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Bits required to represent an integer */

int main()
{
    int raqam, sanamoq, i;

    printf("Har qanday raqamni kiriting ");
    scanf("%d", &raqam);

    sanamoq = 0;

  for(i=0; i<INT_SIZE; i++)
    {

        if((raqam >> i ) & 1)
        {
           
            break;
        }

      
      sanamoq++;
    }

    printf("Total number of trailing zeros in %d is %d.", raqam, sanamoq);

    return 0;
}
