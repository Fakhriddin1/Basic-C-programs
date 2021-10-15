#include <stdio.h>

#define INT_SIZE sizeof(int)        
#define INT_BITS INT_SIZE * 8 - 1   


int chapga_burish(int raqam, unsigned int rotation);
int ongga_burish(int raqam, unsigned int rotation);


int main()
{
    int raqam;
    unsigned int burilish;

    printf("Raqamni kiriting: ");
    scanf("%d", &raqam);

    printf("Burilish sonini kiriting: ");
    scanf("%u", &burilish);

    printf("%d chapga burildi %u times = %d\n\n",  raqam, burilish, chapga_burish(raqam, burilish));
    printf("%d o'ngga burilgan %u times = %d\n", raqam, burilish, ongga_burish(raqam, burilish));


    return 0;
}

int chapga_burish(int raqam, unsigned int burilish)
{
    int DROPPED_MSB;

    burilish %= INT_BITS;
    while(burilish--)
    {

        DROPPED_MSB = (raqam >> INT_BITS) & 1; 

        raqam = (raqam << 1) | DROPPED_MSB;
    }

    return raqam;
}

 
int ongga_burish(int raqam, unsigned int burilish)
{
    int DROPPED_LSB;

    burilish %= INT_BITS;

    while(burilish--)
    {
 
        DROPPED_LSB = raqam & 1;

        raqam = (raqam >> 1) & (~(1 << INT_BITS));

        raqam = raqam | (DROPPED_LSB << INT_BITS);
    }

    return raqam;
}
