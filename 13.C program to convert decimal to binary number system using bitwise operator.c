#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 

int main()
{
    int raqam,indeks, i;
    int axlat_qutisi[INT_SIZE];

    printf("Har qanday raqamni kiriting: ");
    scanf("%d", &raqam);

    indeks = INT_SIZE - 1;

    while(indeks >= 0)
    {
      
        axlat_qutisi[indeks] = raqam & 1;

        indeks--;

        raqam >>= 1;
    }

    printf("Konvertatsiya qilingan ikkilik: ");
    for(i=0; i<INT_SIZE; i++)
    {
        printf("%d", axlat_qutisi[i]);
    }

    return 0;
}
