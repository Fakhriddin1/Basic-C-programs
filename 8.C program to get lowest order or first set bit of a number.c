#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 

int main()
{
    int raqam, buyurtma, i;

  
    printf("Har qanday raqamni kiriting: ");
    scanf("%d", &raqam);

  
    buyurtma = INT_SIZE - 1;

    
    for(i=0; i<INT_SIZE; i++)
    {
        
        if((raqam>>i) & 1)
        {
            buyurtma = i;

            
            break;
        }
    }

    printf("Lowest order set bit in %d is %d", raqam, buyurtma);

    return 0;
}
